//数组的排序,从小到大（冒泡 
/*#include<stdio.h>
int main(){
	int i,j,t;
	int a[6]={5,7,9,10,3,1};
	for(i=0;i<5;i++){//i是排序的趟数 
		for(j=0;j<5-i;j++){//j比较次数 
			  if(a[j]>a[j+1])
			  {
			  t=a[j];
			  a[j]=a[j+1];
			  a[j+1]=t;
		      }
	    }
	}
	for(i=0;i<6;i++){
	printf("从小到大顺序为:%d\n",a[i]);
}
	return 0;
} */


/*
给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的
那 两个 整数，并返回他们的数组下标。你可以假设每种输入只会对应一个答案。但是，
你不能重复利用这个数组中同样的元素。
*/
/*#include<stdio.h>
int main()
{
	int nums[]={1,2,3,4,5,6};
	int target,i,j,r;
	int result=0;
	printf("请输入目标值:");
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
		printf("能找到");
	}
	else{
		printf("不能找到");
	}
	return 0; 
} */

//找到数组中每个数出现的次数 
#include <stdio.h>
int main()
{
int s[13]={1,1,2,3,4,4,3,2,1,1,1,2,3},c[5]={0},i;
for(i=0;i<13;i++)
c[s[i]]++;
for(i=1;i<5;i++)
printf("%d出现了%d次\n",i,c[i]);
printf("\n");
return 0;
}
