#include<stdio.h>
void main()
{
	int a;
	printf("ENTER A NUMBER:  \n");
	scanf("%d",&a);
	if(a%2 == 0){
		printf("%d is EVEN",a);
	}else if(a%2 != 0){
		printf("%d is ODD",a);
    }else{
    	printf("%d is NEUTRAL");
	}
	
}
