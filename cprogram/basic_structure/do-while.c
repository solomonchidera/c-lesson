#include "header.h"

int main(void)
{
	int x = 0;

	do
	{
		printf("%d ", x);
		x++;
	} while(x <= 20);

	putchar('\n');

	return(0);
}
