#include<stdio.h>
#include<stdlib.h>

int main(void){
	int month_array[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
							{31,29,31,30,31,30,31,31,30,31,30,31}};
	int year=0,month=0,day=0,sum=0;
	int i;

	printf("�P�_�o�@�Ѭ��@�~�����ĴX��\n");
	printf("�п�J�~��:");
	scanf("%d",&year);
	printf("�п�J���:");
	scanf("%d",&month);
	printf("�п�J���:");
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
	printf("�ѼƬ�:%d��",sum);

} 
