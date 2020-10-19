#include<bits/stdc++.h>
using namespace std;
class List{
  class Node{
    public:
    int data;
    Node* next;
    Node(){
      this->data = 0;
      this->next = NULL;
    }
  };
  public:
    Node* head=NULL;
    void add(int data){
      Node* newNode = new Node();
      newNode->data = data;
      newNode->next = NULL;
      if(this->head == NULL){
        this->head = newNode;
        head->next = NULL;
      }
      else{
        Node* ptr=NULL;
        ptr = this->head;
        while(ptr->next!=NULL){
          ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = NULL;
      }
    }
    void traverse(){
      Node* ptr;
      ptr = this->head;
      while(ptr!=NULL){
        cout<<ptr->data<<"\n";
        ptr = ptr->next;
      }
    }

};
int main(){
  List l;
  l.add(2);
  l.add(3);
  l.add(9);
  l.add(4);
  l.traverse();
  return 0;
}
