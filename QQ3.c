#include<stdio.h>
void main()
{
	int n;
	char choice;
	while(1){
	
	
	printf("\nENTER the NUMBER:  \n");
	scanf("%d",&n);
    if(n>0){
    	printf("\n%d is +VE\n",n);
	}else if(n<0){
		printf("\n%d is -VE\n",n);
		
	}
	else {
		printf("\n%d is 0\n",n);
	}
	scanf("%c",&choice);
	if(choice=='n'|| choice=='N'){
		break;
	}
}
printf("\nTHANKYOU...........................BREAK\n");
}