#include<stdio.h>
void main()
{
	float a,b;
	printf("ENTER two NUMBERS: a=\n b=\n");
	scanf("%f%f",&a,&b);
	switch(a>b){
		case 1: printf("\n%d is Maximum\n",a);
		break;
		case 0: printf("\n%d is Maximum\n",b);
		break;
		
	} if(a==b){
		printf("\nBOTH NUMBERS EQUAL\n");
	}
}