

public abstract class Parent{

     int age;

    Parent(){}

    Parent(int age)
    {
        this.age = age;
    }

    static void message()
    {
        System.out.println("Hey, I have been called using class");
    }

    void normalMethod()
    {
        System.out.println("I am a normal method!!");
    }
    abstract void career();
    abstract void partner();
}