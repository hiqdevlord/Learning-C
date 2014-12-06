
#include <stdio.h>

int main(void)
{
	int aNumber;

	printf("Please enter a number: ");
	fflush(stdout);
	scanf("%d", &aNumber);
	printf("You entered %d.", aNumber);
	getchar();

	return 0;
}