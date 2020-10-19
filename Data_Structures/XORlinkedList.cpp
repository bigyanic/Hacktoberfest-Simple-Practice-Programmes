#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){
        prev = NULL; next = NULL;
    }
};
Node* XOR(Node *a, Node *b){
    return reinterpret_cast<Node *>(reinterpret_cast<uintptr_t>(a) ^ reinterpret_cast<uintptr_t>(b));
}
class List{
    public:
    Node* head;
    List(){
        head = NULL;
    }
    void add(int data){
        Node* newNode = new Node();
        newNode->data = data;
        if(head == NULL){
            head = newNode;
        }
        else{
            Node *ptr = head;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = newNode;
            newNode->prev = ptr;
        }
    }
    void traverse(){
        Node *ptr = head;
        while(ptr != NULL){
            cout<<ptr->data<<"  =>  ";
            ptr = ptr->next;
        }
    }
};
int main(){
        List *l1 = new List();
        l1->add(2);
        l1->add(3);
        l1->add(4);
        l1->traverse();
        Node* n1 = XOR(NULL,l1->head);
        cout<<"\n"<<n1->data+"\n";
}
