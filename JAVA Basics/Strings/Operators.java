import java.util.*;

public class Operators {
    public static void main(String[] args) {
        System.out.println('a' + 'b'); // !Adds the ASCII values of both the characters
        System.out.println("a" + "b");// !Concatinates
        System.out.println((char)('a' + 3));

        System.out.println("a" + 1);
        //! integer will be converted to Integer that will call toString().

        System.out.println("a" + 'a');

        System.out.println("Gopal" + new ArrayList<>());

       ArrayList<Integer> n = new ArrayList<>();

       n.add(4);
       System.out.println(n);

       //    System.out.println(new Integer(5) + new ArrayList<>());//! Atlease one among them should be string because they are complex data type. 
       //    System.out.println(new Integer(5) + " "+ new ArrayList<>());
        // System.out.println(Arrays.toString(arr));

        // Integer a = 5;
        // Integer b = 5;
        // System.out.println(a == b); // true

        // Integer a = new Integer(5);
        // Integer b = new Integer(5);
        // System.out.println(a == b);//false
    }
}
