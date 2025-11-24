#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // List of words
    char *words[] = {"apple", "banana", "orange", "mango", "grapes"};
    int totalWords = 5;

    // Pick random word
    srand(time(NULL));
    char *word = words[rand() % totalWords];

    int len = strlen(word);
    char guessed[20];
    int attempts = 6;
    int correct = 0;

    // Fill guessed with '_'
    for (int i = 0; i < len; i++)
    {
        guessed[i] = '_';
    }
    guessed[len] = '\0';

    printf("Welcome to Hangman!\n");

    while (attempts > 0 && correct < len)
    {
        char guess;
        int found = 0;

        printf("\nWord: %s\n", guessed);
        printf("Attempts left: %d\n", attempts);
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        for (int i = 0; i < len; i++)
        {
            if (word[i] == guess && guessed[i] == '_')
            {
                guessed[i] = guess;
                correct++;
                found = 1;
            }
        }

        if (!found)
        {
            attempts--;
            printf("Wrong guess!\n");
        }
        else
        {
            printf("Correct!\n");
        }
    }

    if (correct == len)
        printf("\nYou win! The word was: %s\n", word);
    else
        printf("\nYou lost! The word was: %s\n", word);

    return 0;
}
