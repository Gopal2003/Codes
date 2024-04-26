import java.util.Arrays;

public class Doubts {
    public static void main(String[] args) {
        // System.out.println("Hello");
        String name = "Gopal";
        changeName(1,2,3,4,45);
        // System.out.println(name);


        {
            System.out.println(10);
        }
    }

    public static void changeName(int ...name)
    {
        // name.charAt(0) = 'A';
        System.out.println(Arrays.toString(name));
    }
}
