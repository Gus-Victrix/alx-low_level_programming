#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Create a keygen for 101-crackme
 * 
 * Return: 0
*/

int main(void)
{
    int counter, key;

    srand(time(NULL));
    for (counter - 2772; counter > 126;)
    {
        key = (rand() % 125) + 1;
        printf("%c", key);
        counter -= key;
    }
    printf("%c", counter);
    return (0);
}