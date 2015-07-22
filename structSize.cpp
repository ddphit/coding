#include <iostream>
using namespace std;

#pragma pack(8)

struct test{
	char c;
	short s;
	short sa;
	int i;
};
int main(){
	cout<<sizeof(test)<<endl;
	return 0;
}
