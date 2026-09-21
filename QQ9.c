#include<stdio.h>
void main()
{
	float x,y;
	printf("ENTER COORDINATES\n x = \n  y = \n");
	scanf("%f%f",&x,&y);
	if(x == 0 && y == 0){
		printf("x = %f & y = %f\n ORIGIN",x,y);
	}else if(x>0 && y>0){
		printf("x = %f & y = %f\n Q1",x,y);
	}else if(x<0 && y>0){
		printf("x = %f & y = %f\n Q2",x,y);
	}else if(x<0 && y<0){
		printf("x = %f & y = %f\n Q3",x,y);
	}else if(x>0 && y<0){
		printf("x = %f & y = %f\n Q4",x,y);
	}else{
		printf("INVALID.... ENTER PROPER VALUES");
	}
	
}