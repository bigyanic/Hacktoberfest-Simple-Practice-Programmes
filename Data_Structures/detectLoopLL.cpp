//We detect if a loop is present in a singly linked list using Floyd's Algorithm

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

bool detectLoop(Node *head) {
    Node *p, *q = head;
    while(p && q && q -> next) {
        p = p -> next;
        q = q -> next -> next;
        if(p == q) return true;
    }
    return false;
}

int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next = new Node(40);

    //create a loop here
    head -> next -> next -> next = head;

    if(detectLoop(head)) cout << "Loop has been detected!" << endl;
    else cout << "There is no loop." << endl;

    return 0;
}