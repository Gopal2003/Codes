public class FirstProgram{
    public static void main(String[] args)
    {
        //! Basic Commands to create an instance of class and assign the values to its attributes.
        // A student1 = new A();
        // student1.name = "Gopal Agarwal";
        // student1.rolln0 = 35;
        // student1.marks = 96.6f;

        // System.out.println(student1.name);
        // System.out.println(student1.rolln0);
        // System.out.println(student1.marks);

        //! Assigning values to the attributes of instance variable using Constructor with parameters.
        // A student2 = new A("Gopu",35,7.22f);
        // System.out.println(student2.name);

        //! Assigning values to the attributes of instance variable  student3
        // A student3 = new A();
        // System.out.println(student3.name);

        //! Testing whether we can change the attribute
        // A Student = new A("Gopal",45,67.5f);
        // System.out.println(Student.name);
        // Student.name = "Agarwal";
        // System.out.println(Student.name);
        // Student = new A("Devil",4,56.6f);
        // System.out.println(Student.name);

        //! Testing the same using final keyword and also trying to create new instance variable which will give error due to final keyword.
        // final A Student1 = new A("Gopal",45,2345.43f);
        // System.out.println(Student1.name);
        // Student1.name = "Agarwal";
        // System.out.println(Student1.name);//We can change the attributes but not the object itself when final is declared;
        // Student1 = new A("D3Vil",34,23456.f); error as final is assigned.

        Integer a = 10;
        Integer b = 20;
        // System.out.println(a);
        // a = 30;
        // System.out.println(a);
        
        swap(a, b);
        System.out.println(a + " " + b);
        //Sapping is not happening because Integer is final.
        
        
        
        
        
    }
    
    public static void swap(Integer a,Integer b)
    {
        Integer temp = a;
        a = b;
        b = temp;
    }
}

class A{
    String name;
    int rolln0;
    float marks;

    A(String name,int rolln0,float marks)
    {
        this.name = name;
        this.rolln0 = rolln0;
        this.marks = marks; // this.marks = student1.marks;
    }
    
    // A()
    // {
    //     this("D3ViL",90,99.8f);//Constructor calling another constructor. 
    // }
    
    // A(String name,int rolln0,float marks)
    // {
    //     this.name = name;
    //     this.rolln0 = rolln0;
    //     this.marks = marks; // this.marks = student1.marks;
    // }
}