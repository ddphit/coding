//约瑟夫环问题：可以采用循环链表解决，这里采用数组进行求解。

#include<iostream>
using namespace std;
//n为总的个数
//m表示当某人报数为m时，退出，k为第一次起始报数的人，从第k个人开始报i数
void josephusFunc(int a[],int n, int m, int k){
	int result[10];
	cout<<"JosephusFunc.....\n";
	if(a==NULL)return ;	
	if(k<0)return ;
	int i=k-1;  //记录第一次开始报数的人，从第k个开始
	int count=0;   //记录出列的人数
	bool flag=true;
	while(flag){
//		cout<<"while  1.......\n";
		int j=1;  //记录报数
		while(1){
//			cout<<" while 2.....\n";
			if(a[i%n]!=0){
				a[i%n]=j;
				if(j==m){
					result[count]=i%n;
					cout<<i%n<<"  ";
					++count;
					a[i%n]=0;
					break;
				}
				else{
					++j;
				}
			}
			++i;
		}	
		if(count==n)flag=false;
	}
//	return result;
}

int main(){
	int a[]={1,5,8,9,64,7,23,15,14,81};
	int* b=a;
	int *p=a;
	josephusFunc(p,10,3,2);
//	for(int i=0;i<10;++i){
//		cout<<b[i]<<"   ";
//	}
	return 0;
}
