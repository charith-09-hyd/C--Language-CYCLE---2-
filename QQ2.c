#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("ENTER THREE NUMBERS:    \n");
	if(scanf("%d%d%d",&a,&b,&c)){
	
	
	
	if(a>b){
		if(a>c){
			printf("GREATEST = %d",a);
		}else{
			printf("GREATEST = %d",c);
		}
		
	}else{
		if(b>c){
			printf("GREATEST = %d",b);
		}else{
			printf("GREATEST = %d",c);
		}
	}
} else{
	printf("INVALID...ENTER NUMBER ONLY");
}
}

