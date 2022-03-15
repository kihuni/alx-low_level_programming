#include "main.h"


void print_alphabet_x10(void)
{
    char letter = 'a';
    while(letter <= 'z')
    {
        int i;
        for(i = 0; i <= 10; i++)
        {
            _putchar(letter);

        }
        _putchar('\n');
    }
}