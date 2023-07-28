#include "header.h"

int main(void)
{
	int a = 0;
	char b;


	while(a <= 10)
	{
		b = 'a';

		while(b < 'z')
		{
			putchar(b);
			b++;
		}
		putchar(10);
		a++;
	}
	return(0);
}
