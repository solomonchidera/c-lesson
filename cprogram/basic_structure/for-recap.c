#include "header.h"

int main(void)
{
	char a = 'a';
	
	for (; a <= 'z'; a++)
	{
		printf("%c", a);
	}
	putchar(10);

	return(0);
}
