#include<iostream>
#include <string.h>
using namespace std;

//采用指针引用的方式可以达到字符串交换的目的
void swap1(char *&x,char *&y){
	char *temp;
	temp=x;
	x=y;
	y=temp;
}

//采用指针无法达到字符串交换的目的，这个指针交换只能在函数体内有效，因为在函数体内，函数栈分配了两个临时的指针变量分别指向指针参数，对实际的值没影响。
//所以在函数体内，值是交换了，但在main函数中还是没变。可以采用二维指针。二维指针类似与指针引用。可以达到交换字符串的目的。
void swap2(char *x, char *y){
	char *temp;
	temp=x;
	x=y;
	y=temp;
	cout<<temp<<"  "<<x<<"   "<<y<<endl;
}

void swap3(char **x, char **y){
	char *temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<*x<<"   "<<*y<<endl;
}
int main(){
	char s[]="hello";
	char *a=s;
	char d[]="how are you?";
	char *b=d;
	swap1(a,b);
	cout<<a<<"   "<<b<<endl;
	swap2(a,b);
	cout<<a<<"   "<<b<<endl;
	swap3(&a,&b);
	cout<<a<<"   "<<b<<endl;
	return 0;
}
