package calculator;
public class Calculator 
{
    int a,b;
    Calculator(int a, int b)
    {
        this.a=a;
        this.b=b;
    }
    public int Add()
    {
        return a+b;
    }
    public int Substract()
    {
        return a-b;
    }
    public int Multiply()
    {
        return a*b;
    }
    public int Divide()
    {
        return a/b;
    }
    public static void main(String[] args) 
    {
        Calculator c =new Calculator(100,20);
        System.out.print(" Addition : "+c.Add());
        System.out.print(" Subtration : "+c.Substract());
        System.out.print(" Multipication : "+c.Multiply());
        System.out.print(" Division : "+c.Divide());
    }
}
