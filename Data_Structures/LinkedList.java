class Node{
    int data;
    Node next;
    Node(){
        data = 0;
        next = null;
    }
}
class Linked{
    Node head;
    Linked(){
        head = null;
    }
    void add(int value){
        Node newNode = new Node();
        newNode.data = value;
        newNode.next = null;

        if(head==null){
            head = newNode;
        }
        else{
            Node ptr = head;
            while(ptr.next != null){
                ptr = ptr.next;
            }
            ptr.next = newNode;
        }
    }
    void traverse(){
        Node ptr=head;
        System.out.println("-------------");
        while(ptr != null){
            System.out.println(ptr.data);
            ptr = ptr.next;
        }
        System.out.println("-------------");
    }
    void deleteLast(){
        Node ptr = head;
        Node prePtr =ptr;
        while(ptr.next != null){
            prePtr = ptr;
            ptr = ptr.next;
        }
        prePtr.next = null;
        traverse();
    }
    void insertStart(int value){
        Node newNode = new Node();
        newNode.data = value;
        newNode.next = null;

        if(head==null){
            head = newNode;
        }
        else{
            newNode.next = head;
            head = newNode;
        }
        
        traverse();
    }
    void deleteStart(){
        head = head.next;
        traverse();
    }
}
public class LinkedList{
    public static void main(String...args){
        Linked l = new Linked();
        l.add(2);
        l.add(3);
        l.add(4);
        l.add(5);
        l.traverse();
        l.deleteLast();
        l.insertStart(1);
        l.deleteStart();
    }
}