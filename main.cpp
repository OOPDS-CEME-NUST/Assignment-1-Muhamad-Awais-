#include"linkedlist.h"
#include <iostream>
using namespace std;
int main(){
	list obj;
	cout<<"Adding five elements"<<endl;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	obj.createnode(55);
	cout<<"\n--------------------------------------------\n";
	cout<<"displaying all values\n";
	obj.display();
	cout<<"\n--------------------------------------------\n";
	cout<<"Inserting value at last"<<endl;
	obj.insert_last(15);
	obj.display();
	cout<<"\n--------------------------------------------\n";
	cout<<"Inserting value at start"<<endl;
	obj.insert_start(10);
	obj.display();
	cout<<"\n--------------------------------------------\n";
	cout<<"Deleting first element"<<endl;
	obj.delete_first();
	obj.display();
	cout<<"\n--------------------------------------------\n";
	cout<<"Deleting last element"<<endl;
	obj.delete_last();
	obj.display();
	cout<<"\n--------------------------------------------\n";
	cout<<"Deleting at given location 4th in this case"<<endl;
	obj.delete_position(4);
	obj.display();
	cout<<"\n--------------------------------------------\n";
	cout<<"Inserting at given location 3rd in this case"<<endl;
	obj.insert_position(3,15);
	obj.display();
	return 0;
}