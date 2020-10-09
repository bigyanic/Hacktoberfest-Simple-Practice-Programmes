import java.util.*;
public class Square {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int num;

        System.out.print("Enter an integer number: ");
        num=sc.nextInt();

        System.out.println("Square of "+ num + " is: "+ Math.pow(num, 2));

    }
}
