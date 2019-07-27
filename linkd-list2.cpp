#include <bits/stdc++.h>

using namespace std; 
class node {
	public :
	int data;
	node* next;
};

node* head=NULL;

node* createnewnode(int data){
	node* newnode=new node();
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}

void insertatbegin(int data){
	node* newnode=createnewnode(data);
	if(head==NULL){
		head=newnode;
		return;
	}
	else 
	   newnode->next=head;
	   head=newnode;
	   cout<<"data inserted correctly "<<data<<endl;
}
void insertafter(int data , int value){

	node* newnode=createnewnode(value);
	node* check=new node();
	check=head;
	if(head==NULL){
		head=newnode;
		return;
	}
	while(check && data!=check->data){
		check=check->next;
	}
	if(!check){
		cout<<"data not found"<<endl;
	}
	else{

		newnode->next=check->next;
		check->next=newnode;
	}

}
void insertatlast(int data){
	node* newnode=createnewnode(data);
	node* last=new node();
	last=head;
	if(head==NULL){
		head=newnode;
		return;
	}
	else {
		while(last->next!=NULL){
		last=last->next;
	    }
	   last->next=newnode;
	}
}
void printd(){
	node* newnode=new node();
	newnode=head;
	while(newnode){
		cout<<" deleted the data"<<newnode->data<<"  "<<endl;
		newnode=newnode->next;
	}
}

int main(){
	insertatbegin(10);
	insertatbegin(20);
	insertatbegin(30);
	insertatbegin(40);
	insertafter(3, 35);
	insertatlast(50);
	printd();
	return 0;
}
