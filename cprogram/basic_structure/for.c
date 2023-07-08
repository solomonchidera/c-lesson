#include "header.h"

/**
 * I'll try as much as possible to explain this codes below with comments
 * we declared a main function which takes void as it's parameter meaning it's not expecting anything
 * i is a variable that will work as an iterator for our program
 * 
 * for loop came next which basically prints A to Z and then a new line with putchar 
 function which prints one character per time using the ascii codes
 * and finally our program return(0) to the operating system indicating that the program was successful 
 */
int main(void)
{
	int i;
	for(i = 65; i <= 90; i++)
	{
		putchar(i);
		putchar(10);

	}
	
	return(0);
}
