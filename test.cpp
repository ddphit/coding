#include<iostream>
using namespace std;

void testC(){
	char *str[]={"welcome","to","Fortemedia","Nanjing"};
	char **p=str+1;
	cout<<**p<<endl;
	str[0]=(*p++)+2;
	cout<<**p<<endl;
	str[1]=*(p+1);	
	cout<<**p<<endl;
	str[2]=p[1]+3;
	cout<<**p<<endl;
	str[3]=p[0]+(str[2]-str[1]);
	cout<<**p<<endl;
	cout<<str[0]<<"   "<<str[1]<<"   "<<str[2]<<"   "<<str[3]<<endl;
	cout<<**p<<endl;
	cout<<p[0]<<"  "<<p[1]<<endl;
}

void testB(){
	int *q;
	int w=10;
	q=&w;
	int **p=0;
	int i;
//	cout<<*p<<endl;

}

void testA(){
	char a;
	char *p=&a;
	a='A';
	cout<<a<<"  "<<*p<<endl;
	cout<<p<<endl;
}

int main(){
	
	testC();
	char str1[]="abc";
	char str2[]="abc";
	const char str3[]="abc";
	const char str4[]="abc";
	const char *str5="abc";
	const char *str6="abc";
	char *str7=str1;
	char *str8=str1;
	cout<<str1<<endl;
	cout<<(str1==str2)<<endl;
	cout<<(str2==str3)<<endl;
	cout<<(str3==str4)<<endl;
	cout<<(str4==str5)<<endl;
	cout<<(str5==str6)<<endl;
	cout<<(str6==str7)<<endl;
	cout<<(str7==str8)<<endl;
	cout<<str7<<endl;	
	return 0;
}
