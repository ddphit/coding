/*
引用&：引用类型的变量在声明的同时必须初始化。
引用只能在声明的时候被赋值，以后都不能再重新赋值。
如：
int a=10;
int &b=a; 
表示b是a的别名，两个共用一个内存地址，所以对b的任何修改就等价于对a的修改。
int c=29;
int &b=c;   //错误，b已经是a的别名，不能再给其他变量当别名。
指针在被赋值的时候一定要初始化，不然就是野指针。
指针的引用：给指针取别名。
如   int a=10;
    int *p=&a;   //指针p指向a的地址。p等于&a,
    int* &q=p;   //q相当于指针p的别名，值：*q=*p=a, 地址：p=q=&a=*&q, &p=&q.   
*/

#include <iostream>
using namespace std;

int main(){
	int a=10;
	int b=23;
	int *i=&a;
	int *&p=i;
	cout<<a<<"  "<<*i<<"   "<<*p<<endl;
	cout<<&a<<"  "<<i<<"   "<<p<<"  "<<endl;
	cout<<&i<<"  "<<&p<<"   "<<*&p<<endl;
	return 0;
}
