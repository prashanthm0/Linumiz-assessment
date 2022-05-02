
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "final.h"

int main()
{	
	FILE* ptr;
	char str[50];
	ptr = fopen("test.c", "a+");    // FILE SHOULD BE HERE

	if (NULL == ptr) {
		printf("file can't be opened \n");
	}

	printf("content of this file are \n");

	while (fgets(str, 50, ptr) != NULL) {
	stdio_check(str);
	stdlib_check(str);
	conio_check(str);
	math_check(str);
	string_check(str);
	time_check(str);
	ctype_check(str);
	}

	fclose(ptr);
	final_result();
	return 0;
}

