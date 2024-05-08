public class Main {
    public static void main(String[] args) {
        // Box b1 = new BoxWeight();
        // BoxWeight b2 = new BoxWeight();
        // b1.greetings();// ! Which Method to call depends on the object. Here the object created is of type BoxWeight.
        // b1.greetings();// !Warning because static method depends on class but not the object of the class.
        /*
          !  Even though the object is of type BoxWeight, the method of Box class is called. This is because, method overriding depends
          !  on the object. Static doesn't depend on object. Hence, overriding cann't be executed.

          
         */

        //  b2.greetings();//* Static can't be overriden, but can be inherited

        Box obj1 = new Box();
        Box obj2 = new BoxWeight();
        System.out.println(obj1.weight);
        System.out.println(obj2.weight);
    }
}
