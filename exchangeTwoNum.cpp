#include<iostream>
using namespace std;
//change the values of two numbers
void swapNum1(int *a, int *b){
	*a=*b+*a;
	*b=*a-*b;
	*a=*a-*b;
}

void swapNum2(int *a,int *b){
	*a=*a^*b;
	*b=*a^*b;
	*a=*a^*b;
}

int main(){
	
	int a,b;
	a=10;b=20;
	swapNum1(&a,&b);
	cout<<"a: "<<a<<"  b:"<<b<<endl;
	a=26;b=84;
	swapNum2(&a,&b);
	cout<<"a: "<<a<<"  b: "<<b<<endl;
	return 0;
}
