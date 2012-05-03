#include <stdio.h>

int main(int argc, char *argv[])
{
	// go through each string in argv
	
	int i = 0;
	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	i = argc - 1;
	while(i >= 0) {
		printf("arg %d: %s\n", i, argv[i]);
		i--;
	}	

	// let's make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 4;
	i = 0; // watch for this
	while(i < num_states) {
		printf("state %d: %s\n", i, states[i]);
		i++;
	}

	i = 0;
	while(i < num_states) {
		states[i] = argv[i];
		i++;
	}

	for(i = 0; i < num_states; i++) {
		printf("states with args pushed: %s\n",
				states[i]);
	}
	

	return 0;
}
