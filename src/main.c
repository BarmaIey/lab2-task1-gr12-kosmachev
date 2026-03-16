#include <stdio.h>
#include <string.h>

void insert_ascii_codes(char *input, char *output);

int main(int argc, char *argv[]) {
		char input[200];
		char output[600];

		if (argc > 1) {
				strncpy(input, argv[1], sizeof(input) - 1);
				input[sizeof(input) - 1] = '\0';
		} else {
				printf("Enter string: ");
				fgets(input, sizeof(input), stdin);
				input[strcspn(input, "\n")] = 0; 
		}

		insert_ascii_codes(input, output);
		printf("Result: %s\n", output);
		return 0;
}
