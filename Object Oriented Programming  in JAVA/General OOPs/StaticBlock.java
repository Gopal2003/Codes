public class StaticBlock {
    //! Beforing moving to main, first statics will be evaluated.
    static int a = 5;
    static int b;

    /**
     * ! In order to initialize the static variable, we can use static block which will run once when the program is runned.
     */

     //! Declaration of static block.
    static{
        System.out.println("I am inside the static block!!!");
        b = a * 4;
    }
    public static void main(String[] args) {
        System.out.println("I am inside the main");
        System.out.println(a + " " + b);
        
        //! Through This we can conclude that static block is loaded only once.Even when we create an object, It won't.
        StaticBlock obj2 = new StaticBlock();
        System.out.println(a + " " + b);

        // System.out.println(StaticBlock.a);
        // System.out.println(StaticBlock.b);
    }


}
