import java.util.*;

public class WeekdaysWeekends {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        String department = sc.next();

        // switch (num) {
            
        //     // case 1:
        //     // case 2:
        //     // case 3:
        //     // case 4:
        //     // case 5:
        //     case 1,2,3,4,5:
        //         System.out.println("Weekdays");
        //         break;
        //     // case 6:
        //     // case 7:
        //     case 6,7:
        //         System.out.println("Weekends");
        //         break;

        //     default:
        //         System.out.println("Enter the valid number");
        //         break;
        //     // break;

        // }

        // switch(num){
        //     case 1,2,3,4,5 -> System.out.println("Weekdays");
        //     case 6,7 -> System.out.println("Weekends");
        //     default -> System.out.println("Enter the valid number");
        // }

        switch(num){
            case 1:
                switch (department) {
                    case "IT":
                        System.out.println("IT Department");
                        break;  
                
                    default:
                        break;
                }
        }
    }
}