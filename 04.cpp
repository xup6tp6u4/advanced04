#include<stdio.h>
#include<stdlib.h>

int main(void){
	int month_array[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
							{31,29,31,30,31,30,31,31,30,31,30,31}};
	int year=0,month=0,day=0,sum=0;
	int i;

	printf("判斷這一天為一年中的第幾天\n");
	printf("請輸入年份:");
	scanf("%d",&year);
	printf("請輸入月份:");
	scanf("%d",&month);
	printf("請輸入日期:");
	scanf("%d",&day);
	
	for(i=0;i<month-1;i++){

		if((year%4==0&&year%100!=0)||year%400==0){

			sum+=month_array[1][i];

		}

		else{

			sum+=month_array[0][i];

		}
	} 

	sum+=day;                
	printf("天數為:%d天",sum);

} 
