/*break����ѭ����������ѭ����ִ��
continue��ֹ����ѭ������ʼ��һ��ѭ��ִ�� */
#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<7;i++)
	{
		if(i==3){
			break; //0,1,2
		//	continue; //0,1,2,3,4,5,6
		}
		printf("i=%d\n",i); 
	}
}


/*�������г����ֽڳ��� 
#include<stdio.h>
int main()
{
	struct student
	{
		char name[10];
		char sex;
		int age;
		struct
		{
			int year;
			int month;
			int day;
		}birth;
	}stul;
	printf("%d",sizeof(stul));
	return 0;
 } */ 
