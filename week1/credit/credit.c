#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = get_long("Number: ");
    long temp = number;
    int sum = 0;
    int count = 0;
    int first = 0;
    int second = 0;

    while (temp > 0)
    {
        int digit = temp % 10;

        if (count % 2 == 1)
        {
            int product = digit * 2;
            sum += product / 10 + product % 10;
        }
        else
        {
            sum += digit;
        }

        temp /= 10;
        count++;
    }

    temp = number;

    while (temp >= 100)
    {
        temp /= 10;
    }

    first = temp;
    second = temp / 10;

    if (sum % 10 == 0)
    {
        if (count == 15 && (first == 34 || first == 37))
        {
            printf("AMEX\n");
        }
        else if (count == 16 && (first >= 51 && first <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((count == 13 || count == 16) && second == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}