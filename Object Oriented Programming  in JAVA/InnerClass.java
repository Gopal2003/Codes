public class InnerClass {

    //! As we know that to access any function inside a class we need an intance of it. We don't have any instance of InnerClass, Hence 
    //! We need to declare the Test class as static so that it won't depend on the objects of the parent class.
    //* As Static doesn't depend on objects, Hence they are resolved at compile time as object resolves at run time.. */
   static class Test{
        String name;
    //    static String name;
         Test(String name)
        {
            this.name = name;
            // Test.name = name;
        }
    }
    public static void main(String[] args) {
        Test child_1 = new Test("Gopal");
        Test child_2 = new Test("Agarwal");

        System.out.println(child_1.name);
        System.out.println(child_2.name);


        // System.out.println(Test.name);
        // System.out.println(Test.name);
    }
}
