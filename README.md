# Hungman-Game
# Hangman Game in C
## Description
This is a simple Hangman game implemented in C, where the player needs to guess letters to uncover a secret word. The player has a limited number of incorrect guesses (6 tries) before the game ends.

## Features
Random Word Selection: A word is randomly selected from a predefined list of words.

Letter Guessing: Players can guess one letter at a time.

Limited Tries: The player has a total of 6 incorrect guesses.

Game End Conditions: The game ends when the player either guesses the word or runs out of tries.

Feedback: The game provides feedback for correct and incorrect guesses and displays the current state of the word.

## Requirements
C Compiler: Any standard C compiler (e.g., GCC, Clang).

Libraries: The game uses standard libraries stdio.h, string.h, and ctype.h.

## Compilation
Open a terminal and navigate to the directory where the Hangman game file is saved.

Compile the program using the following command:

gcc hangman.c -o hangman
Run the program:

./hangman
## How to Play
The game will display a word with blanks (underscores) representing each letter of the word.

The player will be prompted to guess a letter.

After each guess, the game will show:

The current state of the word, with correct letters filled in and incorrect ones as underscores.

The number of remaining tries.

The game continues until the player either guesses the word correctly or runs out of tries.

If the player runs out of tries, the game ends, and the correct word is revealed.

## Example Output

Welcome to Hangman!

Word: _ _ _ _ _ _ 
Guessed letters: 
Tries left: 6
Enter a letter: a

Good guess! 'a' is in the word.

Word: a _ _ _ a _ 
Guessed letters: a
Tries left: 6
Enter a letter: z

Wrong guess! 'z' is not in the word.

Word: a _ _ _ a _ 
Guessed letters: a z
Tries left: 5
Enter a letter: h

Good guess! 'h' is in the word.

Word: a h _ _ a _ 
Guessed letters: a z h
Tries left: 5
Enter a letter: n

Good guess! 'n' is in the word.

Word: a h n _ a _ 
Guessed letters: a z h n
Tries left: 5
Enter a letter: g

Good guess! 'g' is in the word.

Word: a h n g a _ 
Guessed letters: a z h n g
Tries left: 5
Enter a letter: m

Good guess! 'm' is in the word.

Word: a h n g a m 
Guessed letters: a z h n g m
Tries left: 5
Enter a letter: o

Good guess! 'o' is in the word.

Word: a h n g a m o
Guessed letters: a z h n g m o
Tries left: 5
Enter a letter: y

Wrong guess! 'y' is not in the word.

Word: a h n g a m o
Guessed letters: a z h n g m o y
Tries left: 4

Congratulations! You guessed the word: hangman
## Contributing
Feel free to contribute to this project by forking it, making improvements, or adding new features like:

A more extensive word list.

Handling capital letter guesses.

Making the game multiplayer.
