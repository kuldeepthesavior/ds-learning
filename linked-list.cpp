#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node* head=NULL;

struct Node* newnode(int data)

{
	struct  Node* node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->next=NULL;
	return node;
}

void insertnodeatbegin(int data){
	struct Node* ptr=newnode(data);
	if(head==NULL){
		head=ptr;
		return;

	}
	else 
		ptr->next=head;
		head=ptr;
		cout<<"data inserted  ";

}

void insertafter(int data , int value){

struct Node* ptr=newnode(value);
struct Node* check=head;
	if(head==NULL){
		head=ptr;
		return;

	}
	
	while(check && data!=check->data){
	check=check->next;
    }

    if(!check){
    	cout<<" no value found";
    }

    else{
      ptr->next=check->next;
      check->next=ptr;
	}
}

void insertatlost(int data){

	struct Node* ptr=newnode(data);
	struct Node* last=head;
	if(head==NULL){
		head=ptr;
		return;
	}
	else 
		
		while(last->next!= NULL)
		{
		    last=last->next;

		}
		last->next=ptr;
}

void printd(){
	struct Node* ptr=head;

	while(ptr){
		cout<<"deleted data "<<ptr->data<<"  ";
		ptr=ptr->next;
	}
}
int main(){
	insertnodeatbegin(10);
	insertnodeatbegin(20);
	insertnodeatbegin(30);
	insertnodeatbegin(40);


	insertatlost(50);

	insertafter(30,35);
	printd();


	return 0;
}