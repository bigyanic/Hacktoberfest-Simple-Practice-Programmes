class HashMap<S,T>{
    class Node<S,T>{
        S key;
        T value;
        Node next;
        Node(S k, T val) throws IllegalArgumentException{
            key = k;
            value = val;
            next = null;
            if( !(k instanceof String || k instanceof Integer)){
                throw new IllegalArgumentException("Only Integer and String allowed in key");
            }
        }
        Node(){}
    }
    int MAX_CAPACITY;
    Node[] map;
    
    HashMap(int capacity){
        MAX_CAPACITY = capacity;
        map = new Node[MAX_CAPACITY];
        
    }
    int hashValue(S key){
        int loc=0;
        if(key instanceof Integer){
            loc = ((int)key)%10;
        }
        else if(key instanceof String){
            String k = (String)key;
            char ch[] = k.toCharArray();
            int sum=0;
            for(int a:ch){sum+= a;}
            loc = sum%10;
        }
        
        return loc;
    }
    void put(S key, T value){
        int loc = hashValue(key);
        Node<S,T> newNode = new Node<S,T>(key, value);
        if(map[loc] == null){
            map[loc] = newNode;
        }
        else{
            if(map[loc].value == value){
                return;
            }
            Node <S,T> ptr = null;
            ptr = map[loc];
            while(ptr.next != null){
                ptr = ptr.next;
            }
            ptr.next = newNode;
        }
    }
    void get(S key){
        int loc = hashValue(key);
        boolean key_exists = false;
        if(map[loc] == null){
            key_exists = false;
        }
        else{
            if(map[loc].next == null){
                System.out.println(map[loc].value);
                return;
            }
            Node <S,T> ptr = null;
            ptr = map[loc];
            while(ptr != null){
                if(ptr.key == key){
                    System.out.println(ptr.value);
                    key_exists = true;
                    break;
                }
                ptr = ptr.next;
            }
            if(key_exists == false)
                System.out.println("No such key");
        }
    }

}
public class hashmap_imp{
    public static void main(String[] args){
        HashMap<Integer,String> h = new HashMap<Integer,String>(10);
        h.put(4,"Four");
        h.put(14,"Five");
        h.put(24,"TWWWFive");
        h.put(2,"Two");
        h.put(1,"One");
        
        h.get(1);
        h.get(23);
        h.get(2);
        h.get(24);
        h.get(4);
        h.get(14);
        
        
        HashMap<String,String> h1 = new HashMap<String,String>(10);
        h1.put("AB","ABCD");
        h1.put("EH","EFGH");
        
        h1.get("AB");
        h1.get("EH");
        
        /*HashMap<Double,String> h2 = new HashMap<Double,String>(10);
        h2.put(1.2,"AB");*/
        

    }
}
