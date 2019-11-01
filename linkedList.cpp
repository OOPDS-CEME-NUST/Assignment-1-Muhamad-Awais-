#include "linkedlist.h"

list::list(){
	head = NULL;
	tail=NULL;
}


void list::createnode(double value){
	node *temp=new node;
	temp->data=value;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
		tail=temp;
		temp=NULL;
	}
	else{
		tail->next=temp;
		tail=temp;
	}
}


void list::display(){
	node *temp=new node;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
}


void list::insert_start(double value){
	node *temp=new node;
	temp->data=value;
	temp->next=head;
	head=temp;
}


void list::insert_position(int pos, double value){
	node *pre=new node;
	node *cur=new node;
	node *temp=new node;
	cur=head;
	for(int i=1;i<pos;i++){
		pre=cur;
		cur=cur->next;
	}
	temp->data;
	pre->next=temp;
	temp->next=cur;
}


void list::insert_last(double value){
	node *temp=new node;
	node *cur=new node;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	cur->data=value;
	cur->next=NULL;
	temp->next=cur;
	tail=cur;
}

void list::delete_first(){
	node *temp=new node;
	temp=head;
	head=head->next;
	delete temp;
}


void list::delete_last(){
	node *temp=new node;
	node *before=new node;
	temp=head;
	while(temp->next!=NULL){
		before=temp;
		temp=temp->next;
	}
	tail=before;
	before->next=NULL;
	delete temp;
	
}


void list::delete_position(int pos)
{
	node *before = new node;
	node *temp = new node;
	temp=head;
	for(int i=1;i<pos;i++){
		before=temp;
		temp = temp->next;
	}
	before->next=temp->next;
	delete temp;
}