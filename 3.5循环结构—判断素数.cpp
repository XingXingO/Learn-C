//�ж�һ�����Ƿ�Ϊ���� 
#include<stdio.h>
void prime1(int n)
{
	long i;
	for(i=2;i<n;i++)
	{
		if(n%i==0){
		  printf("��������");
		  break; 
	    }
    }
    if(i>=n){
    	printf("������");
	} 
}
int main(){
	int n;
	printf("������һ����:");
	scanf("%d",&n);
	prime1(n);
	return 0;
}
//���ԣ�2��3��5��7��11������ 

/*
����ѧ�����ж�2-10000֮������� 
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
