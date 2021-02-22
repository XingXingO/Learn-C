/*问题一：实现二维数组行列交换
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
//循环遍历输出b数组 
		printf("交换后数组为：\n");
		for(i=0;i<3;i++){
		for(j=0;j<2;j++){
		  printf("%d\t",b[i][j]);		
		}
		printf("\n");
	}
	return 0;
} */

/*问题二：求数组中最大元素值并输出行列号*/
#include<stdio.h>
int main(){
	int i,j;//i是行j是列 
	int a[2][3]={{1,2,3},{4,5,6}};
	int row;//记录行号 
	int column;//记录列号 
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
	printf("最大值max=%d,行号row=%d,列号column=%d\n",max,row,column);
	return 0;
}
