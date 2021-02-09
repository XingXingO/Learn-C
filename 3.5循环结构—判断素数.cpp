//判断一个数是否为素数 
#include<stdio.h>
void prime1(int n)
{
	long i;
	for(i=2;i<n;i++)
	{
		if(n%i==0){
		  printf("不是素数");
		  break; 
	    }
    }
    if(i>=n){
    	printf("是素数");
	} 
}
int main(){
	int n;
	printf("请输入一个数:");
	scanf("%d",&n);
	prime1(n);
	return 0;
}
//测试：2、3、5、7、11是素数 

/*
用数学函数判断2-10000之间的素数 
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	for(i=2;i<10000;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>sqrt(i))
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}*/
