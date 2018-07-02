#include<iostream>
using namespace std;

class Node{
	
	public:
	int data;
	Node* next;
};

class Queue{
	
	private:
		
	Node* currNode, *backPtr, *newNode, *deletePtr;
	int data;
		
	public:
		
	Queue(int x){
		
	Node* newNode = new Node;
	newNode->data = x;
	newNode->next = newNode;	
		
	backPtr = newNode;	

	}
	
		~Queue(){
			
		Node* currNode = backPtr->next;
	
	
		
		while(true){
		
		
		
		cout<<currNode->data<<endl;
		
		if(currNode == backPtr){
			
			
			break;
		}
		
		currNode = currNode->next;	
			
			
	}
	}
	
	bool isEmpty(){
	
	
	return bool(backPtr == NULL);
}

	void enQueue(int x){                     //enQueue Function
	  
	 
	  
	  
	
	  
	  Node* newNode = new Node; 
	   newNode->data = x;
	   
	   	
	   	
	   	newNode->next = backPtr->next;
	   	backPtr->next = newNode;
	   backPtr = newNode;
	    


}
	
	void deQueue(){                     //enQueue Function
	  

if(backPtr->next == backPtr){
	
	cout<<"saya"<<endl;
	backPtr == NULL;
	delete backPtr;
	
}
else{

deletePtr = backPtr->next;
backPtr->next = deletePtr->next;
delete	  deletePtr;
}
}
  


void destroyQueue(){
	

	
		

	
}

	
	
		
};

int main(){
	
Queue p(5);

p.enQueue(6);
p.enQueue(7);

p.deQueue();
p.deQueue();
p.deQueue();
}
