/*
1x1=1
1x2=2  2x2=4
1x3=3  2x3=6  3x3=6
1x4=4  2x4=8  3x4=12  4x4=16
*/
#include<stdio.h>
int main()
{
	int i,j;//j代表前面的数;i代表后面的 
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++)
		{
			if(j<=i)
			printf("%d*%d=%d\t",j,i,i*j);
		}
		printf("\n");
	} 	
    return 0;
}
