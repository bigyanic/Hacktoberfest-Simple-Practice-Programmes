import java.util.*;
public class Solution{
    public static void main(String[] args){

 Scanner sc = new Scanner(System.in);

//  Taking String as a input..

String s = sc.next();
int j = s.length()-1;
int i =0;
int mid = s.length()/2;
boolean is = true;
while(i<mid){
    if(s.charAt(i) == s.charAt(j)){
i++;
j--;

    }
    else{
      is  = false;
      break;
    }
}
    if(is == true){
        System.out.println("String is Palindrome.");
    }else{
        System.out.println("String is not Palindrome.");
    }
    }
}