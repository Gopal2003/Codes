
public interface A {
    static void staticMethod(){
        System.out.println("This method requires a body...");
    }

    default void defaultFunc()
    {
        System.out.println("We can add the body in this function");
    }

    void funA();

} 
