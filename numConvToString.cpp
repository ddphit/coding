#include<iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

//将任意类型的数字转换为字符串
//将任意类型的数字转换为字符串的库函数
void test(){
	int num1=34567;
	double num2=3245.5;
	char str_num[30];
	char str_double[30];
	char str[30];
//	itoa(num1,str_num);
//	itoa(num1,str_num,10);
	gcvt(num2,8,str_double);
//	ecvt(num2,8,str);
	cout<<str_num<<"   "<<str_double<<"   ";
//	cout<<str<<endl;
}

//不使用库函数将数字转换为字符串
void numConvToString(int n,char *str){
	if(str==NULL)
		cout<<"str is NULL"<<endl;
	char buf[20]="";
	int temp;
	int i=0;
	temp=n>0?n:-n;
	while(temp){
		buf[i++]=temp%10+'0';
		temp=temp/10;
	}
	if(n<0){
		++i;
	}
	str[i]='\0';
	int len=0;
	while(len<i){
		if(n<0){
			if(len==i-1)
			{	str[0]='-';
//			cout<<str[0]<<endl;
			break;}
		}
		str[i-len-1]=buf[len];
		cout<<str[i-len-1]<<endl;
		++len;
	}
//	cout<<buf<<endl;
//	for(len=0;len<i;len++)
//		cout<<str[len]<<"   ";	
//	cout<<str<<endl;
}
 int main(){
	int n=-238;
	char str[20];
	numConvToString(n,str);
	cout<<n<<"  "<<str<<endl;

}

