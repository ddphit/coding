/*BST二叉排序树又称为二叉查找树，可以是空树。具有如下性质：
1. 左子树非空，则左子树上所有节点的值均小于根节点的值；
2. 右子树非空，则右子树上所有节点的值均大于根节点的值；
3. 左右子树本身又各是一颗二叉排序树。
*/

#include<iostream>
using namespace std;

struct node{
	int data;
	node *parent;
	node *left;
	node *right;
	node(int num):data(num),parent(NULL),left(NULL),right(NULL){};
};	

class binarySortTree{
	public:
		binarySortTree(int num[], int len){
			root=new node(num[0]);
			for(int i=1;i<len;++i){
				insertNode(num[i]);
			}
		}
		void visitInorderTree(){
			node *pre=root;
			if(pre==NULL){
				return;		
			}
			inOrderTree(pre);
		}
		void inOrderTree(node * cur){
			if(cur!=NULL){
				inOrderTree(cur->left);
				cout<<cur->data<<"  ";
				inOrderTree(cur->right);
			}
		}
		
		//非递归方法
		void insertNode(int data){
			node *r=root;
			node *p=new node(data);
			node *tep=r;
			while(r!=NULL){
				tep=r;
				if(data>r->data){
					r=r->right;
				}else{
					if(data==r->data){
						delete p;
						return;
					}else{
						r=r->left;
					}
				}
			}
			p->parent=tep;
			if(data>tep->data)tep->right=p;
			else
				tep->left=p;
		}

		//递归方法
		void insertNode1(node *cur,int data){
			if(data<cur->data){
				if(cur->left==NULL){
					node *temp=new node(data);
					cur->left=temp;
					temp->parent=cur;
				}else{
					insertNode1(cur->left, data);
				}
			}else{
				if(cur->data==data)return;
				else{
					if(cur->right==NULL){
						node *p=new node(data);
						cur->right=p;
						p->parent=cur;
					}else{
						insertNode1(cur->right,data);
					}
				}
			}
			return ;
		}

		node * searchNode(int data){
			node *cur=root;
			node *pre=root;
			while(cur!=NULL){
				if(cur->data==data)return cur;
				else{
					if(cur->data<data){
						cur=cur->right;
					}else{
						cur=cur->left;
					}
				}
			}
			if(cur==NULL)return NULL;
		}
		
		void deleteNode(int data){
			//需要递归把该节点的左右子树都删掉，不能直接只删除该节点
		}
	private:
		node *root;
};

int main(){
	int a[]={5,3,7,2,4,6,8,1};
	binarySortTree bst(a,8);
	bst.visitInorderTree();
	return 0;
}
