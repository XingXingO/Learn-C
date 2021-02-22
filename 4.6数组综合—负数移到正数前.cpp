//题目：把负数移到正数前面；
/*方法一：从头扫描这个数组，每碰到一个正数时，就拿出来 
拿出这个数字，并把位于这个数字后面的所有数字往前挪动一位。
挪完之后在数组的末尾有一个空位，这时把该正数放入这个空位。
需要移动O(n)个数字，因此总的时间复杂度是O(n２)，空间复杂度为O(1)。*/ 

//测试问题： 正数>=负数时出错，else条件不会写 
#include <stdio.h>
void fun(int a[],int n) //n代表数组个数 
 {
 	int t;
    int num=0; //num代表数组中负数数量 
    for (int k=0;k<n;k++)//a[k]是全部数的坐标,n是总数组元素个数 
    {
         if (a[k]<0)//判断如果是负数，num+1 
         {
             num++;
             t=k;
         }
    } 
    int temp;
    for(int i=0;i<n;i++)
    {//if依次遍历，遍历完所有的负数停止 
      if (i<num){  //i是正数数量a[i]正数坐标，a[num]是负数坐标 
       while(a[i]>0) //判断是否每个位置是否为负数，是正数则拿出 
       {
        temp=a[i];  //将拿出的正数存储在temp 
        for(int j=i+1;j<=t;j++) //从拿出的元素后面继续数组遍历 
        {
        a[j-1]=a[j];  //拿出的正数后面的数字向前移动一位 
        }
        a[t]=temp;  //将拿出的正数放在最后移动的负数的坐标 
       }
    }
        else 
        {
            break;
        }
   }
 }
int main() {
     int data[7]={-3,5,6,-4,-7,8,9};//问题：最后一个数是负数正确，正数出bug 
     fun(data,7);
     for(int i=0;i<7;i++)
     {
     	printf("%d\t",data[i]);
     }
 }
 
/*方法二：如果发现有正数出现在负数的前面，交换他们的顺序； 
两个指针，第一个指针初始化为数组的第一个数字，它只向后移动；
第二个指针初始化为数组的最后一个数字，它只向前移动。
在两个指针相遇前，第一个指针总是位于第二个指针的前面。
若第一个指针指向的是正数，第二个指针指向的是负数，就交换这两个数字; 
此方法会改变元素顺序 
时间复杂度为O(n),空间复杂度为O(1)*/
/*#include<stdio.h>
void swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
} 
void fun(int a[],int n){
	int low=0,high=n-1,t;
	while(low<high)
	{
		while(a[low]<0 && low<high){
			low++;
		}
		while(a[high]>0 && low<high){
			high--;
		}
		swap(a+low,a+high); 
//	    t=a[high];  
//	    a[high]=a[low];
//	    a[low]=t;
	}
}
int main()
{
	int data[6]={-3,5,6,-4,-7,8};
    fun(data,6);
    for(int i=0;i<6;i++)
    {
     	printf("%d\t",data[i]);
    }
	return 0;
}*/
//方法三：类似冒泡,将一个数组中的负数放到正数的前面
/*#include<stdio.h>
int main()
{
	int a[5]={8,-9,5,-3,-5};
	int i,j;
	for(j=0;j<4;j++)
	{
		for(i=0;i<4-j;i++)
		{
			if(a[i]>0&&a[i+1]<0)
			{
				a[i]=a[i]^a[i+1];
				a[i+1]=a[i]^a[i+1];
				a[i]=a[i]^a[i+1];
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
} */
