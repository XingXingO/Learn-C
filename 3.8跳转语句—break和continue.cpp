/*break跳出循环，跳出后循环不执行
continue终止本次循环，开始下一次循环执行 */
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


/*计算下列程序字节长度 
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
