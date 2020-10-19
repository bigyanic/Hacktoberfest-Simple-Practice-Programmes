#include<bits/stdc++.h>
using namespace std;
class LinkedList{
  class Node{
    public:
    int data;
    Node* next;
      Node(){
        data = 0;
        next = NULL;
      }
  };
  public:
    Node* head;
    LinkedList(){
      head=NULL;
    }
    void add(int data){
      Node* newNode = new Node();
      newNode->data = data;
      if(head==NULL){
        head = newNode;
      }
      else{
        Node* ptr;
        ptr = head;
        while(ptr->next != NULL){
          ptr=ptr->next;
        }
        ptr->next = newNode;
      }
    }
    void traverse(){
      Node* ptr;
      ptr = head;
      while(ptr != NULL){
        cout<<ptr->data<<" - ";
        ptr = ptr->next;
      }
      cout<<"\n";
    }
    void getNfromEnd(int N){
      Node* ptr;
      ptr= head;
      int count=0;
      while(ptr!=NULL){
        ptr = ptr->next;
        count++;
      }
      int beg = count-N;
      ptr = head;count=0;
      while(ptr!=NULL){
        if(count==beg){
          cout<<ptr->data;
          break;
        }
        count++;
        ptr = ptr->next;
      }
    }
};
int main(){
  LinkedList* l1 = new LinkedList();
  l1->add(2);
  l1->add(3);
  l1->add(4);
  l1->add(5);
  l1->traverse();
  l1->getNfromEnd(2);
}
