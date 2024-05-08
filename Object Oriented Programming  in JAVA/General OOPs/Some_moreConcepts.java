public class Some_moreConcepts {
    public static void main(String[] args) {
        // Human gopal = new Human("Gopal", 32);
        // Human agarwal = new Human("Agarwal",54);

        // System.out.println(Human.population);// Explanation in OOPS-2 of kk or in notes.
        // System.out.println(gopal.name);// Explanation in OOPS-2 of kk or in notes.
        // System.out.println(agarwal.population);

        //! Calling a static method using class.
        // Human.print();

        //! Calling a non-static method using an instance of class.
        // gopal.print2();
        //! Error as the method is non-static hence it need an instance of class. It is no more the method of the class.
        // Human.print2();

        //! Calling method
        // gopal.method();


    }

}

class Human {
    String name;
    int age;
    static long population;

    Human(String name, int age) {
        this.name = name;
        this.age = age;
        Human.population += 1;
    }

    static void print()
    {
        System.out.println("Hello I am inside the static function");
    }

    void print2()
    {
        System.out.println("Hello I am inside the function which is non static. Hence, I need an instance of class");
    }

     void method()
    {
        //! As method is a non-static function, It is mandatory that an instance must be created in order to call method. Hence
        //! The same instance is used to call print3(). 
        print3();
    }

    void print3()
    {
        System.out.println("I have been called from a non-static method");
    }

    /* 
    static void dummy(){
        /**
         * ! Error- We cannot call a non-static method which is inside a static method.
         
          print3();
        }
        */
}