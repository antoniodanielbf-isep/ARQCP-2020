#include <stdio.h>
#include "ex11.h"

int main(void){

	int num=0x55555555;
	int nbits=1;
	int res=rotate_left(num,nbits);
	int res1=rotate_right(num, nbits);
	printf("%d\n", res);
	printf("%d\n", res1);

	return 0;
}
