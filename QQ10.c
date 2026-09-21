#include<stdio.h>
void main()
{
	char c;
	printf("ENTER CHARACTER:   \n");
	scanf("%c",&c);
	if(isalpha(c)){
		printf("%c is ALPHABET",c);
	}else if (isdigit(c)){
		printf("%c is DIGIT",c);
	}else{
		printf("%c is SPECIAL CHARACTER",c);
	}
}