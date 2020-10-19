import java.util.Scanner;

public class Xhiel23_PrimeNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n = scanner.nextInt();
        if(isPrime(n)){
            System.out.println(n + " is prime");
        }else{
            System.out.println(n + " is not prime");
        }
    }

    public static boolean isPrime(int number){
        if(number <= 0){
            return false;
        }else{
            for(int i = 2; i<number; i++){
                if(number%i==0){
                    return false;
                }
            }
        }
        return true;
    }
}