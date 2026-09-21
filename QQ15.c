#include<stdio.h>
void main()
{
	int a;
	printf("ENTER NUMBER:  \n");
	scanf("%d",&a);
	switch(a%2){
		case 0 : printf("%d is EVEN\n",a);
		break;
		default: printf("%d is ODD\n",a);
		break;
	}
}