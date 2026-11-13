#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
        1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
    };
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = 0;
    int score2 = 0;

    for (int i = 0; word1[i] != '\0'; i++)
    {
        if (word1[i] >= 'a' && word1[i] <= 'z')
        {
            score1 += points[word1[i] - 'a'];
        }
        else if (word1[i] >= 'A' && word1[i] <= 'Z')
        {
            score1 += points[word1[i] - 'A'];
        }
    }

    for (int i = 0; word2[i] != '\0'; i++)
    {
        if (word2[i] >= 'a' && word2[i] <= 'z')
        {
            score2 += points[word2[i] - 'a'];
        }
        else if (word2[i] >= 'A' && word2[i] <= 'Z')
        {
            score2 += points[word2[i] - 'A'];
        }
    }

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}