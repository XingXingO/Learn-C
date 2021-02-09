//求1-100的累加和、有三种方式while、do while、for
/*
#include<stdio.h>
int main()
{
	int i=1;
	int sum=0;
	while(i<=100)
	{
		sum+=i;
		i++;
	}
	printf("1-100的和为：%d\n",sum);
	return 0;
}*/

/*
#include<stdio.h>
int main()
{
	int i=1;
	int sum=0;
	do
	{
		sum+=i;
		i++;
	} while(i<=100);
	printf("1-100的和为：%d\n",sum);
	return 0;}
*/

#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	for(i=1;i<=100;i++)
	{
		sum+=i;
	} 
	printf("1-100的和为：%d\n",sum);
	return 0;}

