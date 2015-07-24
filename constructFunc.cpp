//C++中的构造函数调用过程  ：默认构造函数，复制构造函数，赋值函数等等
#include<iostream>
using namespace std;

class human{
	public:
		human(){
			num++;
		}
		static int num;
		~human(){
			num--;
			print();
		}
		void print(){
			cout<<"num is :"<<num<<endl;
		}
};
int human::num=0;

human f1(human x){
	x.print();
	return x;
}

int main(){
	human h1;
	h1.print();
	human h2=f1(h1);
	h2.print();
	return 0;
}
