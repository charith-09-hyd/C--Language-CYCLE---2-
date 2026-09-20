#include<stdio.h>
void main()
{
	int a,b;
	printf("ENTER TWO NUMBERS:   \n");
	
	
	if(scanf("%d%d",&a,&b))
	{ if(a>b){
		printf("%d is greatest",a);
    }
	 else{
	 	printf("%d is greatest",b);
	 }
}   else{
	printf("INVALID.... ENTER A NUMBER ONLY ");
}
 
}