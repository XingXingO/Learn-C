//10个数组元素赋值后逆序输出
#include<stdio.h>
int main(){
	int i;
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	for(i=0;i<10;i++){
		a[i]=i;
	}
	for(i=9;i>=0;i--){ //循环逆序输出a[i] 
		
		printf("%d\n",a[i]);
	} 
	return 0;
}
