//虚函数的调用机制

#include<iostream>
using namespace std;
class A{
	public:
		virtual void print(void){
			cout<<"A::print()\n";
		}
};

class B:public A{
	public:
		virtual void print(void){
			cout<<"B::print()\n";
		}
};

class C:public A{
	public:
		void print(){
			cout<<"C::print()\n";
		}
};

void print(A a){
	a.print();
}

int main(){
	A a,*pa,*pb,*pc;
	B b;
	C c;
	pa=&a;
	pb=&b;
	pc=&c;
	
	a.print();
	b.print();
	c.print();
	pa->print();
	pb->print();
	pc->print();

	print(a);
	print(b);
	print(c);
	return 0;
}
