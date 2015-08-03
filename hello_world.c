#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int number;
#define HW_STRING "Hellow world\n"

int main(int argc, char **argv) {
	char *string;
	number = 7;
	string = 0xdd4010; //malloc(strlen(HW_STRING) + 1);
	
	printf("String virtual address %lx\n",(unsigned long) string);
	strcpy(string, HW_STRING);

	printf("%s %i\n", string, number);
	return 0;
}

