//问题一：输入一个字符串，统计其中有多少个单词，单词间空格隔开。
/*#include<stdio.h>
int main(){
	char str[50];
	int i,count=0; //count统计单词个数 
	int word;  //word表示是否为新单词 
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			word=0; //用word为0表示str[i]是空格 
		}
		else if(word==0){//判断word是否等于0 
			word=1;//新单词开始，word更新为1 
			count++;
		}
	}
	printf("单词的个数为%d\n",count); 
	return 0;
}
*/
//问题二：输入 3 个字符串，找出其中的最大者。
#include<stdio.h>
#include<string.h>
int main(){
	char str[3][10];//定义一二维数组
	char tmp[10];//存放最大的那个字符串
	int i;
	for(i=0;i<3;i++){
		gets(str[i]);//读入三个字符，依次赋值str[0],str[1],str[2]
	} 
	//接下来进行两两比较，strcmp比较函数，比ASCII码 
	if(strcmp(str[0],str[1])>0){
		//比较后str[0]大 
		strcpy(tmp,str[0]);//将str[0]拷贝到tmp中 
	} 
	else{
		//str[1]大
		strcpy(tmp,str[1]); 
	} 
	if(strcmp(str[2],tmp)>0){
		//str[2]大
		strcpy(tmp,str[2]); 
	}
	//tmp存的就是最大的字符串
	printf("最大的字符串为：%s\n",tmp);
	return 0; 
}
