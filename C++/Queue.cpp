/*
    Implementation of Queue Data structure using array
    Name: Vinayak L Kokane
*/
#include<bits/stdc++.h>
#define MAX 5
using namespace std;

int a[MAX];
int Front=0, Rear=-1;

int peek(){             //Returns the first element/front of Queue
    return a[Front];
}
int isFull(){
    if(Rear==MAX-1)
        return 1;       //true
    else
        return 0;       //false
}

int isEmpty(){
    if(Front<0 || Front>Rear)
        return 1;
    else
        return 0;
}

void enqueue(int data){
    if(isFull())
        cout<<"\nNo space to enqueue the data\n";
    else{
        Rear++;
        a[Rear]=data;
    }
}

int dequeue(){
    if(isEmpty())
        cout<<"\nQueue is empty, no data to be dequeue from it\n";
    int data=a[Front];
    Front=Front+1;
    return data;

}

int main(){
    cout<<"\nEnter the elements in Queue: \n";
    for(int i=0;i<MAX;i++){
        int x;  cin>>x;
        enqueue(x);
    }
    cout<<"Front: "<<a[Front]<<"  Rear: "<<a[Rear];
    int newdata=dequeue();
    cout<<"\nDequeue data: "<<newdata;
    cout<<"\nQueue elements are: ";
    while(!isEmpty()){
        int data=dequeue();
        cout<<data<<" ";
    }

}
