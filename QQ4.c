#include<stdio.h>
void main()
{
	int a;
	printf("ENTER 'a':   \n");
	scanf("%d",&a);
	if((a%5== 0)&&(a%11 == 0)){
		printf("a is divisible by 5 and 11");
	}else{
		printf("a is not divisible by 5 and 11");
	}
}