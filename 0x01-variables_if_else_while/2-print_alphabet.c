#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	
	while(ch <= 'z')  
    {  
        putchar(ch);  
        ch++;  
    }

	return (0);
}
