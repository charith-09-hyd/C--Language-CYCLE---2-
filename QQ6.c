#include<stdio.h>
void main()
{
	int a;
	printf("ENTER YEAR:  \n");
	scanf("%d",&a);
	if(a%4 == 0 && a%100 != 0)
	{
	    printf("%d is LEAP YEAR",a);
	} else{
		printf("%d is NOT LEAP YEAR",a);
	}
}
	
