//单链表的操作
//求单链表中倒数第K元素或中间数，或者判断单链表是否存在环形链表等，方法都是采用设置一个指针，一个走k步或2步等过后，另一个指针才开始走。

#include<iostream>
using namespace std;

//链表节点的定义
struct node{
	int data;
	node *next;
	node(int nu){
		data=nu;
	}
};
//创建单链表

class SingleList{
	public:
		//头插法
		void createListHead(){//head指向第一个节点，head本身不是该第一个节点
			int data;
			cin>>data;
			if(data==0)return ;
			int count=0;
			head->data=0;
			head->next=NULL;
			while(data!=0){
				node *p=new node(0);
				p->data=data;
				p->next=NULL;
				if(count==0){
					count++;
					head->next=p;
				}else{
					p->next=head->next;
					head->next=p;
				}
				cin>>data;
			}
			head=head->next;
		}

		void createList(){    //尾插法
			int data;
			cin>>data;
			
			node *q=new node(0);
			q->data=data;
			q->next=NULL;
			head=q;
			cin>>data;   //输入结束符为0.
			while(data!=0){
				node *p=new node(0);
				p->data=data;
				p->next=NULL;
				q->next=p;
				q=p;
				cin>>data;
			}
		}
		
		//打印单链表
		void printList(){
			cout<<"print....\n";
			node *rt=head;
			while(rt!=NULL){
				cout<<rt->data<<"   ";
				rt=rt->next;
			}
			delete rt;
		}
	
		int lenList(){
			cout<<"lenList ....\n";
			int len=0;
			node *vs=head;
			while(vs!=NULL){
				vs=vs->next;
				len++;
			}
			printList();
			return len;
		}
		
		//实现一个单链表的逆置
		void reverseList(){
			cout<<"reverseList....\n";
			if(head==NULL)return ;
			node *p,*q,*r;
			p=head;
			q=p->next;
			p->next=NULL;
			while(q!=NULL){
				r=q->next;
				q->next=p;
				p=q;
				q=r;
			}
			head=p;
		}
	private:
		node *head;//head指向第一个节点，即head为第一个节点
};

int main(){
	SingleList sl;
	sl.createListHead();
 //   	sl.printList();
	int len=0;
	len=sl.lenList();	
	cout<<"the length of this singlelist is :"<<len<<endl;
	sl.reverseList();
	sl.printList();
	return 0;
}

