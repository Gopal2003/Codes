import java.util.*;

public class doubtsClarification {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String ans = sc.next();

        //! New Version
        switch (ans) {
            default -> System.out.println("Enter valid");
            case "apple" -> System.out.println("red");
            case "orange" -> System.out.println("round");
        }

        //! Older version
        // switch (ans) {
        //     case value:
                
        //         break;
        
        //     default:
        //         break;
        // }
    }
}
