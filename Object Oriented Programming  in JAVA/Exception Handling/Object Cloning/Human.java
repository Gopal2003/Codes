
public class Human implements Cloneable{
    
    String name;
    int age;
    Human(Human h)
    {
        System.out.println(name + " " + age);
        this.name = h.name;
        this.age = h.age;
    }

    Human(int age,String name)
    {
        this.name = name;
        this.age = age;
    }

    public Object clone() throws CloneNotSupportedException{
        return super.clone();
    }
}
