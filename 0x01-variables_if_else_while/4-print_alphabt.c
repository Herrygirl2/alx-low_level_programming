#include <stdio.h>

/**
 * main - main function is the entry point
 * Return: Always return 0 on success
 */
int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	} 	
	putchar('\n');
	return (0);
}
