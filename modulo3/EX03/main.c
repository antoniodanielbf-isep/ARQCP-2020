#include <stdio.h>
#include "str_copy_porto2.h"

char* ptr1;
char* ptr2;

int main(void) {

	char string1[] = "three vVv";
	char string2[100];

	ptr1 = string1;
	ptr2 = string2;

	str_copy_porto2();

	printf("ptr1() = %s\n", string1);
	printf("ptr2() = %s\n", string2);

	return 0;

}
