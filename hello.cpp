#include<iostream>
using namespace std;
char getChar(int x,int y){
	char c;
	unsigned int a=x;
	(a+y>10)?(c=1):(c=2);
	cout<<c<<endl;
	return c;
}

int main(void){
	char c1=getChar(7,4);
	char c2=getChar(7,3);
	char c3=getChar(7,-7);
	char c4=getChar(7,-8);
	
	cout<<"c1: "<<c1<<endl;
	cout<<"c2: "<<c2<<endl;
	cout<<"c3: "<<c3<<endl;
	cout<<"c4: "<<c4<<endl;
	return 0;
}
