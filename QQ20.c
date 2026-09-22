#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("\nENTER NO.OF UNITS consumed:   \n");
	scanf("%f",&a);
	if(a<200){
		b = (1.2*a);
		printf("\nBILL = %.2f\n",b);
	}else if(a<400 && a>=200){
		b = (1.5*a);
		printf("\nBILL = %.2f\n",b);
		
	}else if(a<600 && a>=400){
		b = (1.8*a);
		printf("\nBILL = %.2f\n",b);
	}else if(a>=600){
		b = (2*a);
		printf("\nBILL = %.2f\n",b);
	}else{
		printf("\nENTER NUMBER ONLY\n");
	}if(b>=400){
		c = (b*0.15)+b;
		printf("\nTOTAL BILL(surcharge)= %.2f \n",c);
	}else if (b<400){
		printf("\nTOTAL BILL = %.2f\n",b);
	}if(b<=100){
		printf("\nINVALID BILL\n");
	}
	
	
}