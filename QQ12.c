#include<stdio.h>
void main()
{
	int a;
	printf("ENTER NUMBER OF MONTH:  \n");
	scanf("%d",&a);
	switch(a){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: printf("31 days ");
		break;
		case 4:
		case 6:
		case 9:
		case 11: printf("30 days ");
		break;
		case 2: printf("LEAP YR: 28 days\n NON-LEAP YR: 29 days");
		break;
		default : printf("INVALID");
			
	}
}