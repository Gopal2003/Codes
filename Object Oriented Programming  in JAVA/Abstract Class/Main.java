// package Abstract Class;

public class Main {
    
    public static void main(String[] args) {
        Son s = new Son(23);
        s.career();
        System.out.println(s.age);

        Daughter d = new Daughter(21);
        d.career(); 
        System.out.println(d.age);

        Parent p = new Parent() {
            void career()
            {
                System.out.println("Parent");
            }

            void partner()
            {
                System.out.println("parent");
            }
        };

        p.career();// ! As the body of abstract class is not written in parent class, while making the object of the parent class,
        //! the interpreter demands

        Parent.message();
    }
}
