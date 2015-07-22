#include <iostream>
#include <stdlib.h>
using namespace std;

/*
atexit()函数来注册程序正常终止时要被调用的函数。
atexit函数的参数是一个函数指针，函数指针指向一个没有参数也没有返回值的函数，原型如下：
int atexit(void (*)(void));
一个程序中最多可以用atexit函数注册32个处理函数，这些处理函数的调用顺序与其注册的顺序相反。
*/

void print1(){

	cout<<"print1 function....\n";
}

void print2(){

	cout<<"print2 function ....\n";
}

int main(){
	atexit(print1);
	atexit(print2);
	cout<<"main function exit..\n";	
	return 0;
}
