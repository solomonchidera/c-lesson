#include "header.h"

int main(void)
{
	int a;
	char b;
	for (a = 0; a < 10; a++)
	{
		
		putchar(10);
		for (b = 'a'; b <= 'z'; b++)
		{
			printf("%c", b);
		}
	}
	return(0);
}
