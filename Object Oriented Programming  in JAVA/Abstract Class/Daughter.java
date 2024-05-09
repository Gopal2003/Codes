// package Abstract Class;

public class Daughter extends Parent{

    Daughter(int age)
    {
        // super();
        this.age = age;
    }
    @Override
    void career()
    {
        System.out.println("I want to be a coder");
    }

    @Override
    void partner()
    {
        System.out.println("I want men but not boy!");
    }
}
