#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Node{
	public:
		int data;
		Node *next;		
};

class LinkedList{
	public:
		Node *start;
		Node *PLoc;
		Node *loc;
		
		LinkedList(){
			start = NULL;
			PLoc=NULL;
			loc=NULL;
		}
		
		bool isEmpty(){
			return start==NULL;
		}
		
		 void InsertAtFront(int value){
		 	Node *NN = new Node();
		 	NN->data=value;
		 	
		 	NN->next=start;
		 	
		 	start=NN;
		 	
		}
		void PrintList(){
			Node *temp= start;
			if(!(isEmpty())){
				while(temp!=NULL){
					cout<<temp->data<<" ";
					temp=temp->next;
				}
				cout<<endl;
				
			}
			else{
				cout<<"List is empty"<<endl;
			}
		}
		void Search(int value){
			loc=start;
			PLoc=NULL;
			while(loc!=NULL && loc->data<value){
				PLoc=loc;
				loc=loc->next;
			}
			if(loc!=NULL &&  loc->data!=value){
				loc=NULL;
			}
		}
		void InsertSorted(int value){
			Node *temp = new Node();
			temp->data=value;
			Search(value);
			if(loc!=NULL){
				cout<<"Bhai bar bar kyu data dal rhy ho"<<endl;
			}
			else{
				if(PLoc==NULL){
					InsertAtFront(value);
				}
				else{
					temp->next=PLoc->next;
					PLoc->next=temp;
				}
			}
			
		}
		//Reversing the nodes of the linked list
		void ReverseNode(){
			Node *current=start; //assinging current the start value

			Node *prev=NULL,*frwd=NULL; // two pointer var for prev and next links

			while(current!=NULL){    //loop breaks when current is null

				frwd=current->next; //storing the next of current in frwd

				current->next=prev; //changing the successor of the current node to the previous

				prev=current; //change the position of the prev

				current=frwd; //change the current position
			}

			start=prev; //at the end last node will be the head node
		}
};
int main(){
	LinkedList *abc = new LinkedList();
	cout<<"Hello CB"<<endl;

	abc->InsertSorted(5);
	abc->InsertSorted(3);
	abc->InsertSorted(6);
	
	abc->PrintList();
	abc->ReverseNode();
	abc->PrintList();
	cout<<endl;
	return 0;
}