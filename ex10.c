#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// go through each string in argv
	// why am I skipping argv[0]?
	for(i = 0; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	
	// let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 4;

	for(i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
    if(i == 2) {
      printf("i is %d so that is enough for now.\n", i);
      break;
    }
	}

	return 0;
}
