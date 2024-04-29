public class Dog extends Cat {
    String type;
    Dog(String type)
    {
        this.type = type;
        System.out.println("Dog");
    }
    @Override
    void type()
    {
        System.out.println("Another cute pet");
    }
}
