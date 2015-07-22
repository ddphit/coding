/* 
 #ifdef,#else,#endif的使用:
如果我们定义了预处理器常量，如下定义的DEBUG，则执行一段代码，这段代码是包含在ifdef到endif之间的。
比如，你debug一个程序，但是到最后你需要将debug的代码删掉，很多则很麻烦。但是如果debug的测试程序都是包含在ifdef和endif中，便只需要将预处理器常量注释掉就可以了

*/
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/*
宏定义：尽量用const代替宏定义，宏定义容易出错，没有类型安全检查，在预处理阶段，是直接替换。所以可能出现意想不到的错误。
注意事项：宏是在预处理阶段进行的，不做语法检查，
1. 宏名一般用大写，宏定义末尾不加分号。
2. 可以用#undef命令终止宏定义的作用域。
3. 宏定义不分配内存，宏定义不存在类型问题，参数也是无类型的。
宏求最大值。
#define MAX(X,Y) (((X)>(Y))?(X):(Y))
与宏类似的有内联函数。
*/
#define DEBUG

int main(){
	int i=0;
	char c;
	while(1){
		i++;
		c=getchar();
		if(c!='\n')getchar();
		if(c=='q'||c=='Q'){
		#ifdef DEBUG
			cout<<"we got:"<<c<<", about to exit.\n";
		#endif
			break;
		}else{
			cout<<"i="<<i<<"\n";
		#ifdef DEBUG
			cout<<"we got "<<c<<"\n";
		#endif
		}
	}
	return 0;
} 

