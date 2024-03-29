#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
void print_letters(char arg[], int arg_length);

void print_arguments(int argc, char *argv[])
{
	int i = 0;

	for(i = 0; i < argc; i++) {
		char *arg = argv[i];
		int arg_length = strlen(arg);

		print_letters(arg, arg_length);
	}
}

void print_letters(char arg[], int arg_length)
{
	int i = 0;

	for (i = 0; i <= arg_length; i++) {
		char ch = arg[i];

		if(isalpha(ch) || isblank(ch)) {
			printf("'%c' == %d ", ch, ch);
		}
	}

	printf("\n");
}


int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}
