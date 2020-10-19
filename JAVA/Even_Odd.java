import java.util.Scanner;

class CheckEvenOdd
{
  public static void main(String args[])
  {
    int num;
    System.out.println("Enter an Integer number:");

    //The input provided by user is stored in num
    Scanner input = new Scanner(System.in);
    num = input.nextInt();

    /* If number is divisible by 2 then it's an even number
     * else odd number*/
    if ( num % 2 == 0 )
        System.out.println("Entered number is even");
     else
        System.out.println("Entered number is odd");
  }
}

class ForEvenOrOdd
{
public static void main(String args[])
{
  int i,j;
  for(i=0;i<=10;i++)
{
  if(i%2==1)
{ 
  System.out.println("Odd Numbers:" +i);
}
}
   for(j=0;j<10;j++)
{ 
  if(j%2==0)
{ 
  System.out.println("Even Number:"+j);
}
}
}
}
