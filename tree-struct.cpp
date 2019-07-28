#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *left , *right;
	node(int d){
	this->data=d;
	left =right=NULL;
	}
};

void inorder(struct node* newnode){
	if(newnode==NULL){
		return;
	}
	inorder(newnode->left);
	cout<<newnode->data<<endl;
	inorder(newnode->right);
}

void preorder(struct node* newnode){
	if(newnode==NULL){
		return;
	}
	cout<<newnode->data<<endl;
	preorder(newnode->left);
	preorder(newnode->right);
}

void postorder(struct node* newnode){
	if(newnode==NULL){
		return;
	}
	postorder(newnode->left);
	postorder(newnode->right);
	cout<<newnode->data<<endl;
}

int main(){
	struct node* head=new node(1);
	head->left=new node(2);
	head->right=new node(3);
	head->left->left=new node(4);
	head->left->right=new node(5);
	cout<<" inoreder travesral"<<endl;
	inorder(head);
	cout<<" preoreder travesral"<<endl;
	preorder(head);
	cout<<" postoreder travesral"<<endl;
	postorder(head);
	return 0;
}