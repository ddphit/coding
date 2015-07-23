//字符串比较函数，如果str1和str2,相等则返回0， str1>str2，返回1，str1<str2,返回-1；

#include<iostream>
using namespace std;

int myStrcmp(const char *str1, const char *str2){
	if(str1==NULL&&str2==NULL)return 0;
	if(str1==NULL)return -1;
	if(str2==NULL)return 1;
	
	while(*str1!='\0'&&*str2!='\0'){
		if(*str1<*str2){
			return -1;
		}else{
			if(*str1==*str2){
				++str1;
				++str2;
			}else{
				return 1;
			}
		}
	}
	
	if(*str1=='\0'&&*str2=='\0')return 0;
	if(*str1=='\0'){
		return -1;
	}
	if(*str2=='\0')return 1;
}

int main(){
	char str[]="123456";
	char str1[]="123456";
	char str2[]="12345678";
	char str3[]="135";

	cout<<myStrcmp(str,str1)<<endl;
	cout<<myStrcmp(str1,str2)<<endl;
	cout<<myStrcmp(str2,str3)<<endl;
}
