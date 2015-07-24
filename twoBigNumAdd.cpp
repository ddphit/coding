//¿¿¿¿¿¿¿¿¿¿¿¿¿¿

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

using namespace std;

char *addBigInt(char * num1, char *num2){
	int c=0;   //¿¿¿¿¿¿¿¿¿¿
	int i=strlen(num1)-1;   //¿¿num1¿¿¿
	cout<<i<<"--i  ";
	int j=strlen(num2)-1;   //¿¿num2¿¿¿
	cout<<j<<"--j   ";
	int maxLen=(i>j)?i+2:j+2;   //¿¿¿¿¿¿¿¿¿
	cout<<maxLen<<"--maxLen \n";
	char *result=(char*)malloc(20);
	if(result==NULL)return NULL;
	int k=maxLen-1;
	while(i>=0&&j>=0){
		int temp1=(num1[i]-'0');
		int temp2=(num2[j]-'0');
		int temp3=temp1+temp2+c;
		char tem=(temp3%10)+'0';
		result[k]=tem;
		c=((num1[i]-'0')+(num2[j]-'0')+c)/10;
		--i;
		--j;
		--k;
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
		--j;
		--k;
	
	}
	result[k]=c+'0';
	cout<<result<<endl;
	if(result[0]=='0')return result+1;
	else
		return result;
}

int main(){

	char a[]="123456789323";
	char b[]="45671254563123";
	char *str1=a;
	char *str2=b;
	char *result=new char[30];
	result=addBigInt(str1,str2);
	cout<<result<<endl;
	return 0;
}
