#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6

void choose_word(char *word) {
    // Predefined list of words
    char *words[] = {"python", "hangman", "developer", "machine", "algorithm"};
    int random_index = rand() % 5;
    strcpy(word, words[random_index]);
}

void display_word(char *word, char *guessed_letters) {
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        if (strchr(guessed_letters, word[i]) != NULL) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char word[100];
    char guessed_letters[100] = "";
    char guess;
    int tries = 0;
    int correct_guesses = 0;
    int word_length;

    // Initialize random number generator
    srand(time(0));

    // Choose a random word
    choose_word(word);
    word_length = strlen(word);

    printf("Welcome to Hangman!\n");

    while (tries < MAX_TRIES && correct_guesses < word_length) {
        printf("\nWord: ");
        display_word(word, guessed_letters);
        printf("Guessed letters: %s\n", guessed_letters);
        printf("Tries left: %d\n", MAX_TRIES - tries);
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);

        // Check if the letter has already been guessed
        if (strchr(guessed_letters, guess) != NULL) {
            printf("You already guessed that letter!\n");
            continue;
        }

        // Add the guessed letter to the guessed_letters string
        strncat(guessed_letters, &guess, 1);

        // Check if the guessed letter is in the word
        int found = 0;
        for (int i = 0; i < word_length; i++) {
            if (word[i] == guess) {
                found = 1;
                correct_guesses++;
            }
        }

        if (found) {
            printf("Good guess! '%c' is in the word.\n", guess);
        } else {
            tries++;
            printf("Wrong guess! '%c' is not in the word.\n", guess);
        }
    }

    if (correct_guesses == word_length) {
        printf("\nCongratulations! You guessed the word: %s\n", word);
    } else {
        printf("\nGame Over! The word was: %s\n", word);
    }

    return 0;
}
