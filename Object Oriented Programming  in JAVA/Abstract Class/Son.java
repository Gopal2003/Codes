// package Abstract Class;

public class Son extends Parent{

    Son(int age)
    {
        // super(age);
        this.age = age;
    }
    
    @Override
    void career()
    {
        System.out.println("I want to be a doctor");
    }

    @Override
    void partner()
    {
        System.out.println("I want a woman but not girl!");
    }
    
}
