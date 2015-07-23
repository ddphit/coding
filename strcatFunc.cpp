/*
strcat()函数是用来连接字符串的。strcat(strDest,strSrc)表示将strSrc字符串附加到strDest后面。
注意：char a[]="hello world";
	char *b=a;
	char *temp;
	temp=b;
	++temp;
	*temp=0;  //表示将字符串后边的都清除。即a=b=temp="h";
  若   *temp='!';//则不会清除字符串后边的字符，即a=b=temp="h!llo world";
itoa(num,str,10);//表示将数字num以十进制转换为字符串。
*/

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//需要在字符串中插入字符统计的个数，如字符串aaab,则变成aaa3b1;
char *transformation(char *str){
		
	int len=strlen(str);
	char *buffer=(char *)malloc(len+1);
	char *pstr=str;
	char *qstr=str+1;

	int count=0;
	while(*qstr!='\0'){
		if(*pstr==*qstr){
			count++;
			++pstr;
			++qstr;	
		}else{
			itoa(count,buffer,10);
			strcat(buffer,qstr);
			*qstr=0;
			strcat(str,buffer);
			pstr=str+count;
			qstr=pstr+1;
			count=1;
		}
	}	
	itoa(count,buffer,10);
	strcat(str,buffer);
	delete []buffer;
	buffer=NULL;
	return str;
}

int main(){
	char *a;
	a=(char *)malloc(20);
	cin>>a;
	char *b;
	b=(char *)malloc(20);
	b=transformation(a);
	cout<<a<<"   "<<b<<endl;
	a=transformation(a);
	cout<<a<<endl;
	return 0;
}
