//���������,��С����ð�� 
/*#include<stdio.h>
int main(){
	int i,j,t;
	int a[6]={5,7,9,10,3,1};
	for(i=0;i<5;i++){//i����������� 
		for(j=0;j<5-i;j++){//j�Ƚϴ��� 
			  if(a[j]>a[j+1])
			  {
			  t=a[j];
			  a[j]=a[j+1];
			  a[j+1]=t;
		      }
	    }
	}
	for(i=0;i<6;i++){
	printf("��С����˳��Ϊ:%d\n",a[i]);
}
	return 0;
} */


/*
����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ��
�� ���� ���������������ǵ������±ꡣ����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�
�㲻���ظ��������������ͬ����Ԫ�ء�
*/
/*#include<stdio.h>
int main()
{
	int nums[]={1,2,3,4,5,6};
	int target,i,j,r;
	int result=0;
	printf("������Ŀ��ֵ:");
	scanf("%d",&target);
	for(i=0;i<5;i++){
		for(j=1;j<5;j++){
			if(nums[i]+nums[j]==target){
				result = 1;
				printf("i=%d,j=%d\n",i,j);
				break;
			}
		}
	}
	if(result){
		printf("���ҵ�");
	}
	else{
		printf("�����ҵ�");
	}
	return 0; 
} */

//�ҵ�������ÿ�������ֵĴ��� 
#include <stdio.h>
int main()
{
int s[13]={1,1,2,3,4,4,3,2,1,1,1,2,3},c[5]={0},i;
for(i=0;i<13;i++)
c[s[i]]++;
for(i=1;i<5;i++)
printf("%d������%d��\n",i,c[i]);
printf("\n");
return 0;
}
