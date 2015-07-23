//将十进制的数转换为二进制数或16进制的字符串。
//A的ASCII码为65. a的ASCII码为97. 0为48.
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

char *get2String(long num){
	int i=0;
	char *buffer;
	char *temp;
	temp=(char *)malloc(33);
	buffer=temp;
	for(;i<32;i++){
		temp[i]=num&(1<<(31-i));
		temp[i]=temp[i]>>(31-i);
		temp[i]=temp[i]==0?0:1;
	}
	temp[i]='\0';
	return buffer;
}

char *get16String(long num){
	int i=0;
	char *str;
	char *temp;
	str=(char *)malloc(11);
	str[0]='0';
	str[1]='x';
	str[10]='\0';	
	temp=str+2;
	while(i<8){
		temp[i]=(char)(num<<4*i>>28);
		temp[i]=(temp[i]==0)?temp[i]:temp[i]+16;
		temp[i]=(temp[i]<10)?temp[i]+48:temp[i]+55;	
		++i;
	}
	return str;	
}


