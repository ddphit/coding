//树的各种遍历：包括递归和非递归

//前序,中序，后序遍历递归方法类似，区别在于输出的位置。
void preOrderTree(node *root){
	if(root==NULL)return;
	else{
		cout<<root->data<<"  ";  //中序的化就先遍历左子树
		preOrderTree(root->left);
		preOrderTree(root->right);
	}
}

//前序遍历非递归方法采用栈实现
void preOrderTree1(){
	stack<node *> s;
	node *p=root;
	while(p!=NULL||!s.empty()){
		while(p!=NULL){
			s.push(p);
			cout<<p->data<<"  ";
			p=p->left;
		}
		if(!s.empty()){
			p=s.top();
			s.pop();
			p=p->right;
		}
	}
}

//中序遍历非递归
void inOrderTree(){
	stack<node*>s;
	node *p=root;
	while(p!=NULL||!s.empty()){
		while(p!=NULL){
			s.push(p);
			p=p->left;
		}
		
		if(!s.empty()){
			p=s.top;
			s.pop();
			cout<<p->data<<"   ";
			p=p->right;			
		}
	}
}

//后序遍历
void postOrderTree(){
	stack<node *> s;
	node *p=root;
	node *t=root;
	while(p!=NULL||!s.empty()){
		while(p!=NULL){
			s.push(p);
			p=p->left;
		}
		if(!s.empty()){
			p=s.top();
			if(p->tag==1){
				cout<<p->data<<"   ";
				s.pop();
				p=NULL;
			}else{
				p->tag=1;
				p=p->right;
			}
		}
	}
}

//层序遍历非递归方法采用队列
void levelOrderTree(){
	queue<node *> q;
	node *p=root;
	q.push(p);
	node *temp;
	while(!q.empty()){
		temp=q.front();
		q.pop();
		cout<<temp->data<<"   ";
		if(temp->left!=NULL){
			q.push(temp->left);
		}
		if(temp->right!=NULL){
			q.push(temp->right);
		}
	}
}
