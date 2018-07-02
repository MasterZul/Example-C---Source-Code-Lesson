#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Node{                                   //class nodeQ
	
	public:
	
	int data;
	Node* next;
	
};

class Queue                                               //class Queue
{
	
	
private:
	  
	  Node *head, *currNode, *prevNode, *newNode;
	  int data;
	 
public: 

Queue(int x){
	
	
	    Node* newNode = new Node;	 
        newNode->data = x;
        newNode->next = NULL;
	  
	  currNode = newNode;
	   head = newNode;
}


 void createList(int x){                           //creteQueue Function
	 
	 
	  
	  	
	  	
	    Node* newNode = new Node;	 
        newNode->data = x;
        newNode->next = NULL;
	  
	  
	   head = newNode;
	  
	  }
	  
 void Insert(int x){                     //enQueue Function
	  
Node* currNode = head;
Node* prevNode = NULL;

while(currNode && currNode->data < x){

prevNode = currNode;
currNode = currNode->next;

}
	 
	 
 Node* newNode = new Node;	 
 newNode->data = x;
 
if(prevNode == NULL){                                   
		  
	 newNode->next = head;
	  head = newNode;
	               
	  
	  
}
	else{
	
	
	  newNode->next = prevNode->next;
	   prevNode->next = newNode;                  
	  
}

	
}

void swapNode(){
	
	Node* currNode = head;


	while(currNode->next!= NULL){

prevNode = currNode;
currNode = currNode->next;

}

Node *temp = new Node;


temp->data = currNode->data;
currNode->data = head->data;
head->data = temp->data;

}



void Delete(int x){
	
Node *currNode = head;
Node *prevNode = NULL;

while(currNode && currNode->data != x){
	
	prevNode = currNode;
	currNode = currNode->next;
	
}
	
if(currNode){
    if(prevNode){
    	
    prevNode->next = currNode->next;
    delete currNode;
    	
	}

else{
	
	head = currNode->next;
	delete currNode;
	
}


}

	
}

void displayList(){
	
	Node* currNode = head;
	
	while(currNode != NULL){
		
		cout<<currNode->data<<endl;
		
		currNode = currNode->next;
		
	}
	
}

};

int main(){
	
Queue p(1);


p.Insert(3);
p.Insert(6);
p.Insert(8);


p.displayList();
}

