#include <stdio.h>
#include "sum_v3.h"

int op1=0, op2=0;

int main(void) {
	printf("Valor op1:");
	scanf("%d",&op1);

	printf("Valor op2:");
	scanf("%d",&op2);

	printf("Valor op3:");
	scanf("%d",&op3);

	printf("Valor op4:");
	scanf("%d",&op4);

	printf("sum_v3= %d:0x%x\n",sum_v3(),sum_v3());
	return 0;
}
