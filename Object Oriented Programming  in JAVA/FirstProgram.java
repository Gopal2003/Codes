public class FirstProgram{
    public static void main(String[] args)
    {
        // A student1 = new A();
        // student1.name = "Gopal Agarwal";
        // student1.rolln0 = 35;
        // student1.marks = 96.6f;

        // System.out.println(student1.name);
        // System.out.println(student1.rolln0);
        // System.out.println(student1.marks);


        // A student2 = new A("Gopu",35,7.22f);
        // System.out.println(student2.name);

        A student3 = new A();
        System.out.println(student3.name);


    }
}

class A{
    String name;
    int rolln0;
    float marks;

    // A(String name,int rolln0,float marks)
    // {
    //     this.name = name;
    //     this.rolln0 = rolln0;
    //     this.marks = marks; // this.marks = student1.marks;
    // }
    
    A()
    {
        this("D3ViL",90,99.8f);//Constructor calling another constructor. 
    }
    
    A(String name,int rolln0,float marks)
    {
        this.name = name;
        this.rolln0 = rolln0;
        this.marks = marks; // this.marks = student1.marks;
    }
}