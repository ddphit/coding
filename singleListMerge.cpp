//将两个有序的单链表进行合并，合并成一个链表依然有序。
#include<iostream>
using namespace std;


//递归方法
node *mergeSingleList(node *list1, node *list2){
	
	if(list1==NULL)return list2;
	if(list2==NULL)return list1;
	node *head=NULL;
	if(list1->data<list2->data){
		head=list1;
		head->next=mergeSingleList(list1->next,list2);
	}else{
		head=list2;
		head->next=mergeSingleList(list1,list2->next);
	}
	return head;
}


