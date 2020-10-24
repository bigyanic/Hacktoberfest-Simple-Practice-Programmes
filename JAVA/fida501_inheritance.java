       class Vehicle {
        protected String brand = "Yamaha";
        public void Beep(){
          System.out.println("Beep Beep");
        }
      
   }
   class Car extends Vehicle{
     private String modelName =" Pangolier ";
     public static void main(String[] args) {
       Car myCar = new Car();
       System.out.println("I have a car called" + myCar.modelName + "when its time, it sound");
       myCar.Beep();
      }
   }