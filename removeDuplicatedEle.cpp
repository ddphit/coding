#include<iostream>
using namespace std;

int removeDupEle(int a[],int n){
	cout<<"remove DUp.....\n";	
	int count=1;
	for(int i=0;n>=0;++i){
		if(a[i+1]!=a[i]){
			++count;
		//	cout<<a[i+1]<<endl;
		//	cout<<count<<"  ";
		}else{
			a[i+1]=a[i+2];
			--i;
		}
		--n;
	}
//	cout<<count<<endl;
	return count;
}

int main(){
	int a[]={1,1,2,3,5,8,8};
	int len=0;
	len=removeDupEle(a,7);
	cout<<len<<endl;
	return 0;
}
