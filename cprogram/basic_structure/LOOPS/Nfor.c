#include "header.h"

int main(void)
{
	int a;
	char b;
	for (a = 0; a < 10; a++)
	{
		

		for (b = 'a'; b <= 'z'; b++)
		{
			printf("%c", b);
		}
	}
	putchar(10);
	return(0);
}
