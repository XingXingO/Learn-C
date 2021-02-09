//判断闰年，闰年条件：能被4整除但是不能被100整除，或者被400整除
#include<stdio.h>
int main()
{
	int year;
	int result;//定义一个变量表示是否为闰年 
	printf("请输入一个年份：");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || (year%400==0)){
		result=1;
	} 
	else{
		result=0;
	}
//输出结果 
	if(result==1){
		printf("%d是闰年\n",year);
	} 
	else{
		printf("%d是非闰年\n",year);
	}
	return 0;
}
//测试数据:2012是闰年；2019不是闰年 
