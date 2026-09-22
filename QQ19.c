#include<stdio.h>
void main()
{
	float temp;
	printf("ENTER TEMPERATURE in DEGREE CELSIUS:  \n");
	scanf("%f",&temp);
	if(temp<=0){
		printf("FREEZING ");
	}else if(temp>0 && temp<=10){
		printf("VERY COLD \n");
	}else if(temp>10 && temp<=20){
		printf("COLD");
	}else if(temp>20 && temp<=30){
		printf("NORMAL");
	}else if (temp>30 && temp<=40){
		printf("HOT");
	}else if(temp>40){
		printf("VERY HOT");
	}else{
		printf("ENTER NUMBER ONLY");
	}
	
}