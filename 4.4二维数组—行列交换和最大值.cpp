/*����һ��ʵ�ֶ�ά�������н���
1 2 3   1 4
4 5 6   2 5 
        3 6  */ 
/*#include<stdio.h>
int main(){
	int i,j;
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		b[j][i]=a[i][j];	
		}
	}
//ѭ���������b���� 
		printf("����������Ϊ��\n");
		for(i=0;i<3;i++){
		for(j=0;j<2;j++){
		  printf("%d\t",b[i][j]);		
		}
		printf("\n");
	}
	return 0;
} */

/*������������������Ԫ��ֵ��������к�*/
#include<stdio.h>
int main(){
	int i,j;//i����j���� 
	int a[2][3]={{1,2,3},{4,5,6}};
	int row;//��¼�к� 
	int column;//��¼�к� 
	int max=a[0][0];
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){	
		  if(max<a[i][j]){
		    max=a[i][j];
		    row=i;
			column=j; 
			}
		}
	}
	printf("���ֵmax=%d,�к�row=%d,�к�column=%d\n",max,row,column);
	return 0;
}
