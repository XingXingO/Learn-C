//����һ������һ���ַ�����ͳ�������ж��ٸ����ʣ����ʼ�ո������
/*#include<stdio.h>
int main(){
	char str[50];
	int i,count=0; //countͳ�Ƶ��ʸ��� 
	int word;  //word��ʾ�Ƿ�Ϊ�µ��� 
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			word=0; //��wordΪ0��ʾstr[i]�ǿո� 
		}
		else if(word==0){//�ж�word�Ƿ����0 
			word=1;//�µ��ʿ�ʼ��word����Ϊ1 
			count++;
		}
	}
	printf("���ʵĸ���Ϊ%d\n",count); 
	return 0;
}
*/
//����������� 3 ���ַ������ҳ����е�����ߡ�
#include<stdio.h>
#include<string.h>
int main(){
	char str[3][10];//����һ��ά����
	char tmp[10];//��������Ǹ��ַ���
	int i;
	for(i=0;i<3;i++){
		gets(str[i]);//���������ַ������θ�ֵstr[0],str[1],str[2]
	} 
	//���������������Ƚϣ�strcmp�ȽϺ�������ASCII�� 
	if(strcmp(str[0],str[1])>0){
		//�ȽϺ�str[0]�� 
		strcpy(tmp,str[0]);//��str[0]������tmp�� 
	} 
	else{
		//str[1]��
		strcpy(tmp,str[1]); 
	} 
	if(strcmp(str[2],tmp)>0){
		//str[2]��
		strcpy(tmp,str[2]); 
	}
	//tmp��ľ��������ַ���
	printf("�����ַ���Ϊ��%s\n",tmp);
	return 0; 
}
