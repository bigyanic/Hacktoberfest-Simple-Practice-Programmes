import java.util.*;
public class Solution{
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the number..");
   
    // Taking input from user..
    
    int number = sc.nextInt();
    
    if(number%2==0){
        System.out.println("Even");
    }else{
        System.out.println("Odd");
    }

    }
}