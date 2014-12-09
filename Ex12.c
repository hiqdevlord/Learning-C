
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1) {
		printf("Requires at least one argument.");
	} else if (argc > 1 && argc < 4) {
		printf("Arguments:\n");

		for (i = 0; i < argc; i++) {
			if (i == 0) {
				continue;
			}
			printf("%s ", argv[i]);
		}
		printf("\n");

	} else {
		printf("Requires less than 3 arguments.");
	}

	return 0;
}