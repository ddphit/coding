/*
sizeof是操作符,strlen是函数。
sizeof可以用类型做参数，strlen只能用char *做参数，且必须是‘\0’结束。
strlen是计算字符串的长度，不是类型占内存的大小。数组的时候，strlen是数组的实际长度。sizeof是数组要求分配的长度。
如：char a[20]="0123456789"   sizeof为20.   strlen为10，不包括‘\0’.
sizeof(*)任意指针的大小都为系统的字节数.sizeof计算字符串时计算‘\0’。
sizeof计算类以及struct或union的大小时，要考虑CPU对齐问题。对齐是可以更改的，使用#pragma pack(x)可以改变编译器的对齐方式。一般是4个字节。
#pragma pack(2)表示对齐方式为2个字节。
union联合体的大小取决与它所有的成员中占用空间最大的一个成员的大小。
class，struct是所有的成员的大小之和。
*/

#include <iostream>
#include <string.h>
using namespace std;

//将CPU的对齐方式修改为2个字节对齐。
//#pragma pack(2)

class A{
};
class B: virtual public A{
};
class C{
	public:
		int a;
		static int b;
};
int C::b=10;
class D{
	public:
	void printB(){
		cout<<"C中的静态成员变量为："<<endl;	
	}
};
int main(){
	cout<<"A所占的内存为："<<sizeof(A)<<"\n";
	cout<<"B所占的内存为："<<sizeof(B)<<endl;
	cout<<"C所占的内存为："<<sizeof(C)<<endl;
	cout<<"D所占的内存为："<<sizeof(D)<<endl;
	D d;
	d.printB();
	C c;
	c.b=20;
	cout<<"C中的静态成员变量为："<<c.b<<endl;
	C c2;
	cout<<c2.b<<endl;
	char str[20]="0123456789";
	cout<<"sizeof(str)的大小为20："<<sizeof(str);
	cout<<"\nstrlen(str)的大小为10："<<strlen(str);
	char *ss=str;
	cout<<"\nsizeof(ss)为指针的大小"<<sizeof(ss)<<endl;
	cout<<"strlen(ss)为10， "<<strlen(ss)<<endl;
	return 0;
}
