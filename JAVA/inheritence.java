import java.util.*;
class superclass{

String name;
int salary;
int bonus;
  public void input(String name, int salary, int bonus){

    this.name = name;
    this.salary = salary;
    this.bonus = bonus;
  }

  public void display(){

    System.out.println(name+" has a salary of "+salary+" anually");
  }
}
class childclass extends superclass{

  public void display(){

    System.out.println(name+" has a salary of "+salary+" monthly and bonus given was "+bonus);
  }
}
public class inheritence{

  public static void main(String[] args){

    Scanner s = new Scanner(System.in);
    childclass c = new childclass();
    String name = s.nextLine();
    int salary = s.nextInt();
    int bonus = s.nextInt();
    c.input(name,salary,bonus);
    c.display();
  }
}
