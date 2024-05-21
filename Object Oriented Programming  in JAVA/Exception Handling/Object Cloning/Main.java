
public class Main {

    public static void main(String[] args) throws CloneNotSupportedException{
        
        Human h1 = new Human(21,"Gopal");
        // Human twin = new Human(h1); // ! Problem with this is internally it takes time to create clone of another object. 
        //! Instead, we can use the inbuilt method of clone provided by object class.

        Human twin = (Human)h1.clone();
        System.out.println(twin.age);
    }
}
