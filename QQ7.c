#include<stdio.h>
void main()
{
	char a;
	printf("ENTER CHARACTER:   \n");
	scanf("%c",&a);
	if (isalpha(a)){
		printf("%c is ALPHABET\n",a);
	}
	else {
		printf("%c is NOT ALPHABET",a);
		
	}
}