#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,x1,x2;
	printf("ENTER a,b,c COEFFICIENTS:  \n");
	scanf("%d%d%d",&a,&b,&c);
	d = (b*b-4*a*c);
	if(d>0){
		x1 = (-b+sqrt(d))/(2*a);
		x2 = (-b-sqrt(d))/(2*a);
		printf("ROOTS x1 =%f \n x2 =%f ",x1,x2);
		
	}else if(d==0){
		x1 = x2 = (-b+sqrt(d))/(2*a);
		printf("ROOTS: x1=x2=%f",x1,x2);
	}else{
		printf("IMAGINARY/COMPLEX ROOTS");
	}
}