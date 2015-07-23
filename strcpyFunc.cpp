#include <iostream>

using namespace std;
//实现字符串的赋值函数
char *strcpy(char *strDest,const char* strSrc){
	if(strSrc==NULL||strDest==NULL) return NULL;
	char * temp;
	temp=strDest;
	while(*strSrc!='\0'){
		*strDest++=*strSrc++;	
	}
	return temp;
}

int strLen(const char *str){
	if(str==NULL)return 0;
	int len=0;
	while(*str!='\0'){
		++len;
		++str;
	}
	return len;
}

int main(){
	char tem[]="hello world";
	char *str=tem;
	char de[20];
	char* outp=de;
	outp=strcpy(outp,str);
	cout<<outp<<endl;
	cout<<strLen(outp)<<endl;
	return 0;
}
