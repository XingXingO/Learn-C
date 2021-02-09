//水仙花数3位数100-999；个位数立方和+十位数立方和+百位数立方和 
//153/10得15余3; 15/10余5 
#include<stdio.h>
int main()
{
	int i;
	for(i=100;i<=999;i++){
	int g = i%10;    //得到个位数
	int s = i/10%10; //得到十位数
	int b = i/100;  //得到百位数 
	if(g*g*g+s*s*s+b*b*b==i)
	{
		printf("%d是水仙花数\n",i);
		//break;  //得到所有的水仙花数 
	} 
  }
	return 0;
 } 
