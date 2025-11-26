# Hangman game 
The program randomly selects a word from a predefined list and allows the user to guess letters within a limited number of attempts.

📌 Features

Random word selection

Displays hidden word with underscores (_ _ _ _)

Tracks correct and wrong guesses

Limits attempts (default: 6)

Simple interactive console gameplay

🛠️ How It Works

The program selects a random word from the list:

char *words[] = {"apple", "banana", "orange", "mango", "grapes"};


The selected word length is calculated.

An array of underscores is displayed for the user to guess.

The user enters one letter per turn.

If the letter exists in the word:

It is revealed in the correct position(s).

If the letter is wrong:

Attempts decrease.

The user wins if they guess all letters before attempts reach zero.

▶️ How to Run
Compile
gcc hangman.c -o hangman

Run
./hangman

📂 File Structure
hangman.c     → Main Hangman game source code
README.md     → Documentation
📝 Sample Gameplay
<img width="239" height="540" alt="image" src="https://github.com/user-attachments/assets/c9e1789f-e44c-422f-95ee-2a95a95ab256" />
