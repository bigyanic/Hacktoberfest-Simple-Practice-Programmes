class Node{
    int data;
    Node next;
    Node(){
        next = null;
    }
}
class CLL{
    Node head;
    CLL(){head = null;}
    void add(int data){
        Node newNode = new Node();
        newNode.data = data;
        if(head == null){
            head = newNode;
            newNode.next = head;
        }
        else{
            Node ptr = head.next;
            while(ptr.next != head){
                ptr = ptr.next;
            }
            ptr.next = newNode;
            newNode.next = head;
        }
    }
    int traverse(){
        Node ptr = head.next;
        System.out.println();
        int count = 1;
        System.out.print(head.data+" => ");
        while(ptr != head){
            System.out.print(ptr.data+" => ");
            count++;
            ptr = ptr.next;
        }
        System.out.print(ptr.data+" => ");
        System.out.println();
        return count;
    }
    int countNodes(){
        Node ptr = head.next;
        int count = 1;
        while(ptr != head){
            count++;
            ptr = ptr.next;
        }
        return count;
    }
    void addFirst(int data){
        Node newNode = new Node();
        newNode.data = data;
        newNode.next = head;
        
        Node ptr = head.next;
        while(ptr.next != head){
            ptr = ptr.next;
        }
        ptr.next = newNode;
        head = newNode;
    }
    void deleteFirst(){
        if(head == null) return;
        Node ptr = head.next;
        while(ptr.next != head){
            ptr = ptr.next;
        }
        ptr.next = head.next;
        head = head.next;
    }
    void deleteLast(){
        if(head == null) return;
        Node ptr = head.next;
        Node prePtr = ptr;
        while(ptr.next != head){
            prePtr = ptr;
            ptr = ptr.next;
        }
        prePtr.next = head;
    }
    int findPosition(int data){
        if(data == head.data) return 1;
        Node ptr = head.next;
        boolean found = false;
        int count = 1;
        while(ptr != head){
            count++;
            if(ptr.data == data){
                found = true;
                return count;
            }
            ptr = ptr.next;
        }
        if(!found) return -1;
        else return count;
    }
    void deleteElement(int data){
        int pos = findPosition(data);
        if(pos == 1) deleteFirst();
        else if(pos == countNodes()) deleteLast();
        else{
            Node ptr = head.next;
            Node pre = ptr;
            if(head.next.data == data){
                head.next = head.next.next;return;
            }
            while(ptr.next != head){
                if(ptr.data == data) break;
                pre = ptr;
                ptr = ptr.next;
            }
            pre.next = ptr.next;
        }
    }
}
public class CirularLinkedList{
    public static void main(String[] args){
        CLL l = new CLL();
        l.add(1);
        l.add(2);
        l.add(3);
        l.add(4);
        l.add(5);
        /*l.addFirst(10);
        l.addFirst(11);
        l.deleteFirst();
        l.deleteLast();*/
        l.traverse();
        l.deleteElement(1);
        l.traverse();
        l.deleteElement(5);
        l.deleteElement(3);
        l.deleteElement(4); //problem with this line=> run and check later
        l.traverse();
    }
}
