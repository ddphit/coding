//实现两个任意长度的两个正整数相加

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

char *addBigInt(char * num1, char *num2){
	int c=0;   //保存过程中的进位
	int i=strlen(num1)-1;   //指向num1的最低位
	cout<<i<<"--i  ";
	int j=strlen(num2)-1;   //指向num2的最低位
	cout<<j<<"--j   ";
	int maxLen=(i>j)?i+2:j+2;   //最长的长度
	cout<<maxLen<<"--maxLen \n";
	char *result;
	if(result==NULL)return NULL;
//	result[maxLen]='\0';
//	cout<<result<<endl;
	int k=maxLen-1;
//	int k=strlen(result)-1;
	cout<<k<<"--k \n";
//	result[k]='3';
	char E[30];
	result=E;
	result[0]='3';
	cout<<result<<endl;	
	while(i>=0&&j>=0){
		int temp1=(num1[i]-'0');
		int temp2=(num2[j]-'0');
		int temp3=temp1+temp2+c;
	//	cout<<temp3<<endl;
	//	result[k]=((num1[i]-'0')+(num2[j]-'0')+c)%10+'0';
		
		char tem=(temp3%10)+'0';
//		cout<<"tem: "<<tem<<endl;
		result[k]=tem;
//		char *w=&tem;
//		cout<<*w<<endl;
		c=((num1[i]-'0')+(num2[j]-'0')+c)/10;
		--i;
		--j;
		--k;
		cout<<tem<<"   "<<result[k]<<"---result  \n ";
	}
	
	while(i>=0){
		result[k]=(num1[i]-'0'+c)%10+'0';
		c=(num1[i]+c)/10;
		--i;
		--k;
	}
	
	while(j>=0){
		result[k]=(num2[j]-'0'+c)%10+'0';
		c=(num2[j]-'0'+c)/10;
		--i;
		--k;
	}
	
	result[k]=c+'0';
	if(result[0]=='0')return result+1;
	else
		return result;
}

int main(){

	char a[]="123456789323";
	char b[]="45671254563123";
	char *str1=a;
	char *str2=b;
	char *result;
	result=addBigInt(str1,str2);
	cout<<result<<endl;
	return 0;
}
