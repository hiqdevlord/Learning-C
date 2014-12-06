
#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	// Print raw
	printf("Numbers: %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);

	printf("Name each: %c %c %c %c\n",
			name[0], name[1],
			name[2], name[3]);

	printf("Name: %s\n", name);

	// Setup numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	// Setup name
	name[0] = 'G';
	name[1] = 'a';
	name[2] = 'l';
	name[3] = '\0';

	// Print out initialized
	printf("Numbers: %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);

	printf("Name each: %c %c %c %c\n",
			name[0], name[1],
			name[2], name[3]);

	// Print name like string
	printf("Name: %s\n", name);

	// Another way to use name
	char *another = "Gal";

	printf("Another each: %c %c %c %c\n",
			another[0], another[1],
			another[2], another[3]);

	return 0;
}