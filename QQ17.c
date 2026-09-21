#include<stdio.h>
#include<math.h>
void main()
{

	char c;
	char ch;
	while(1){
	
	printf("\nENTER OPERATIONS FROM (+,-,/ & *):  \n");
	scanf("%c",&c);
	float a,b;
	printf("\nENTER TWO NUMBERS:\n a= \n b= \n");
	scanf("%f%f",&a,&b);
	switch(c){
		case '+': printf("%f + %f = %f\n",a,b,a+b);
		break;
		case '-': printf("%f - %f = %f\n",a,b,a-b);
		break;
		case '*': printf("%f * %f = %f\n",a,b,a*b);
		break;
		case '/': printf("%f / %f = %f\n",a,b,a/b);
		        if(b==0){
		        	printf("INVALID DIVISION");
				}else{
					printf("%f / %f =%f ",a,b,a/b);
				}
				break;
	    default : printf("INVALID OPERATOR\n ");
	}
	scanf("%c",&ch);
	if(ch=='n'|| ch=='N'){
		printf("\nTHANKYOU....BREAK\n");
		break;
	}
}
}