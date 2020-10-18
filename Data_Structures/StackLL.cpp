#include<bits/stdc++.h>
using namespace std;
class Stack{
class Node{
  public:
    int data;
    Node* next;
    Node(){
      this->data=0;
      this->next=NULL;
    }
};
class List{
  /*class Node{
    public:
      int data;
      Node* next;
      Node(){
        this->data = 0;
        this->next = NULL;
      }
  };*/
  public:
  Node* head = NULL;
  Node* add(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    if(this->head == NULL){
      this->head = newNode;
    }
    else{
      Node* ptr = NULL;
      ptr = this->head;
      while(ptr->next != NULL){
        ptr = ptr->next;
      }
      ptr->next = newNode;
    }
    return newNode;
  }
  void traverse(){
    Node* ptr = this->head;
    while(ptr!=NULL){
      cout<<ptr->data<<"\n";
      ptr=ptr->next;
    }
  }
};
public:
  Node* top;
  List* l;
  Stack(){
    top = NULL;
    l = new List();
  }
  void push(int value){
      top = l->add(value);
  }
  void pop(){
    if(top==NULL){
      cout<<"Stack underflow\n";
    }
    else{
      Node* ptr = l->head;
      Node* prePtr = ptr;
      while(ptr->next!=NULL){
        prePtr = ptr;
        ptr = ptr->next;
      }
      prePtr->next=NULL;
      top=prePtr;
      delete ptr;
    }
  }
  void peek(){
    if(top==NULL){
      cout<<"No elements to traverse";
      return;
    }
    cout<<top->data<<"\n";
  }

};
int main(){
  Stack* s = new Stack();
  s->push(2);
  s->push(3);
  s->push(4);
  s->peek();
  s->pop();
  s->peek();
  return 0;
}
