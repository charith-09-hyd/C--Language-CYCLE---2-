#include<stdio.h>
void main()
{
	int a;
	printf("ENTER NUMBER:  \n");
	scanf("%d",&a);
	switch(a>0){
		case 1 :printf("%d is +VE",a);
		break;
		case 0 :
			switch(a<0){
				case 1 : printf("%d is -VE",a);
				break;
				case 0 : printf("%d is 0",a);
			    break;
			}
	        break;
	        
	}
   	
}