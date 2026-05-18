#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* adrs;
	
	Node(int x){
		data = x;
		adrs = NULL;
	}		
};

class linkedList{
	Node* head;
		
	public:
	linkedList(){
		head = NULL;
	}
	
	void addNode(int value){		
		Node* newNode = new Node(value);
		// if not create the constructor in Node struct, then:
		// Node* newNode = new Node;
		// newNode->data = value;
		// newNode->adrs = NULL;   
		
		if(head == NULL){
			head = newNode;
			return;
		}		
		Node*  temp = head;		
		while(temp->adrs != NULL){
			temp = temp->adrs;
		}
		temp->adrs = newNode;		
	}
	
	void listShow(){
		if(head == NULL){
			cout<<"List is Empty";
			return;
		}	 
		Node* temp = head;
		while(temp != NULL){
			cout<<temp->data<<"   ";
			temp = temp->adrs;			
		}
		cout<<"\n"<<endl;
	}	
};

int main(){
	linkedList obj;
	
	obj.addNode(64);
	obj.addNode(54);
	obj.addNode(74);
	obj.listShow();
	obj.addNode(44);
	obj.addNode(94);
	obj.addNode(24);	
	obj.listShow();
		
	return 0;
}
