import java.util.*;
public class Factorial {
	public static void main(String args[])
	{
	Scanner sc=new Scanner(System.in);
	int n,i,fact=1;
	System.out.println("Enter a number:");
	n=sc.nextInt();
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	System.out.println("Factorial:"+fact);
	}

}

class factorial
{
	public static void main(String args[])
	{
		 int fact=1;
		 for(int i=4;i>0;i--)
		 {
		 	fact*=i;
		 }
		 System.out.print("fact"+fact);
	}
}
