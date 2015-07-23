/*
将字符串转换为数字：
1. 用标准库函数：atoi(),将字符串转换为整型值。
	atof():将字符串转换为双精度浮点型值。
字符转换为数字，通过ASCII码进行转换：   int num='9'-'0';
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num;
	double num1;
	char str[]="2133";
	char str1[]="213.22";
	num=atoi(str);
	cout<<num<<endl;
	num=atof(str);
	num1=atoi(str1);
	cout<<num<<"  "<<num1<<endl;
	num1=atof(str1);
	cout<<num1<<endl;
	return 0;
}
