//问题一：给定一维数组，求数组中的最大值 
/*#include<stdio.h>
int main(){
	int i;
	int a[5]={4,5,8,11,45};
	int max=a[0];
	for(i=0;i<5;i++){
		if(a[i]>max)
		  max=a[i];
	}
	printf("数组中最大的值为：%d\n",max);
  return 0;
} */

//问题二：实现数组的翻转 12345 输出54321
#include<stdio.h>
int main(){ 
//int a[5]={1,2,3,4,5};  //这是逆序，数组元素中的值没改变 
//int i;
//for(i=4;i>=0;i--){
//	printf("%d",a[i]);
//}
//实现数组的翻转：元素的交换
int a[5]={1,2,3,4,5};
int i,t;
int j=4;
/*for(i=0;i<j;i++){
	t=a[i];
	a[i]=a[j];
	a[j]=t;
	j--;
}*/
while(i<j){
	t=a[i];
	a[i]=a[j];
	a[j]=t;
	i++;
	j--;
}
for(i=0;i<5;i++){
	printf("%d",a[i]);
}
return 0; 
} 
