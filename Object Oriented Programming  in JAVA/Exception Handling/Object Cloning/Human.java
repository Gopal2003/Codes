
public class Human implements Cloneable{
    
    String name;
    int age;
    int arr[];
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
        this.arr = new int[]{1,2,3,4,5};
    }

    // public Object clone() throws CloneNotSupportedException{
    //     //! This is the shallow copy
    //     return super.clone();
    // }
    public Object clone() throws CloneNotSupportedException{
        //! This is the Deep copy
        Human twin = (Human)super.clone();
        twin.arr = new int[twin.arr.length];

        for(int i = 0; i < twin.arr.length; i++)
        {
            twin.arr[i] = this.arr[i];
        }

        return twin;
    }
}
