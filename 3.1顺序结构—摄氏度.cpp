//顺序结构：将华式温度 转换为摄氏温度 
#include<stdio.h>
int main()
{
	double f;
	double c;
	printf("请输入华式温度:\n");
	scanf("%lf",&f);
	c=(5.0/9)*(f-32);
	printf("摄氏温度为：F=%lf,c=%lf\n",f,c);
	return 0;
}
