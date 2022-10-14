#include <iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int data){

        this->data = data;
        this->next = NULL;
    }

};
void search(Node* &head, int d){
    if (head == NULL){
        cout << "List is empty";
        exit(0);
    }
    Node* temp=head;
    while(temp!=NULL && temp->data!=d){
        temp=temp->next;
    }
    if (temp==NULL){
        cout << "Element not found";
    }
    else cout << "Element found";
}
void display(Node* &head){
    if (head == NULL){
        cout << "List is empty";
        exit(0);
    }
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data << endl;
        temp=temp->next;
    }
}
void InsertBeg(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertEnd(Node* &head, int d){
    Node* temp=new Node(d);
    if (head==NULL){
        cout << "Empty List";
    }
    else {
        Node* temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}
void InsertVal(Node* &head,int d, int n){
    Node* temp=new Node(d);
    if (head==NULL){
        cout << "Empty List";
    }
    else {
        Node* temp1=head;
        while(temp1!=NULL && temp1->data!=n){
            temp1=temp1->next;
        }
        if (temp1==NULL){
            cout << "Value not present";
        }
        else {
            if (temp1->next==NULL){
                temp1->next=temp;
                temp->next=NULL;
            }
            else {
                temp->next=temp1->next;
                temp1->next=temp;
            }
        }
    }
}
void DeleteBeg(Node* &head){
    Node* temp=head;
if (head==NULL){
    cout << "Empty list";
}
else {
    head=head->next;
}
}
void DeleteEnd(Node *&head){
    if (head==NULL){
    cout << "Empty list";
}
else {
    Node* temp=head;
    while(temp->next->next!=NULL ){
        temp=temp->next;
    }
    temp->next=NULL;
}
}
void DeleteSpec(Node *&head, int n){
        Node* temp=head;
        Node* prev=NULL;
        if (temp!=NULL && temp->data==n){
            head=head->next;
        }
        else {
        while(temp!=NULL && temp->data!=n){
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL) cout << "Node not found";
        prev->next=temp->next;
}
}
int main(){
    Node n1(10),n2(20),n3(50);
    n1.next=&n2;
    n2.next=&n3;
    Node *head =&n1;
    display(head);
    DeleteSpec(head,20);
    display(head);
}

