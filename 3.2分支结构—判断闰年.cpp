//�ж����꣬�����������ܱ�4�������ǲ��ܱ�100���������߱�400����
#include<stdio.h>
int main()
{
	int year;
	int result;//����һ��������ʾ�Ƿ�Ϊ���� 
	printf("������һ����ݣ�");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || (year%400==0)){
		result=1;
	} 
	else{
		result=0;
	}
//������ 
	if(result==1){
		printf("%d������\n",year);
	} 
	else{
		printf("%d�Ƿ�����\n",year);
	}
	return 0;
}
//��������:2012�����ꣻ2019�������� 
