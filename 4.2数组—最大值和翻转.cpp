//����һ������һά���飬�������е����ֵ 
/*#include<stdio.h>
int main(){
	int i;
	int a[5]={4,5,8,11,45};
	int max=a[0];
	for(i=0;i<5;i++){
		if(a[i]>max)
		  max=a[i];
	}
	printf("����������ֵΪ��%d\n",max);
  return 0;
} */

//�������ʵ������ķ�ת 12345 ���54321
#include<stdio.h>
int main(){ 
//int a[5]={1,2,3,4,5};  //������������Ԫ���е�ֵû�ı� 
//int i;
//for(i=4;i>=0;i--){
//	printf("%d",a[i]);
//}
//ʵ������ķ�ת��Ԫ�صĽ���
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
