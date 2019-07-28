#include <bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node* left;
	node* right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

// node* head=new node();
// head=NULL;

void inorder(node* p){
	if(p==NULL)
		return;
	
	
	//cout<<p->right->data<<"  ";
	inorder(p->left);
	cout<<p->data<<endl;
	inorder(p->right);
}
void preorder(node* p){
	if(p==NULL)
		return;
	
	cout<<p->data<<endl;
	//cout<<p->right->data<<"  ";
	preorder(p->left);
	preorder(p->right);

}
void postorder(node* p){
	if(p==NULL)
		return;
	
	
	//cout<<p->right->data<<"  ";
	postorder(p->left);
	postorder(p->right);
	cout<<p->data<<endl;
}
int main()
{
	/* code */
	node* head=new node(10);
	head->left=new node(20);
	head->right=new node(30);
	head->left->left=new node(40);
	head->left->right=new node(50);
	cout<<"inorder traversal"<<endl;
	inorder(head);
	cout<<"preorder traversal"<<endl;
	preorder(head);
	cout<<"postorder traversal"<<endl;
	postorder(head);
	//cout<<head->right->data<<" ";
	return 0;
}