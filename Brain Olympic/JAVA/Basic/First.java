/**
 * First
 */
import java.util.*;
public class First {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        if(A > B && A > C)
        {
            System.out.println("A is the eldest");
        }
        else if(B > A && B > C)
        {
            System.out.println("B is the eldest");
        }
        else
        {
            System.out.println("C is the eldest");
        }
    }
}