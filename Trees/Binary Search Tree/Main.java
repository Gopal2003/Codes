import java.util.*;
public class Main {
    public static void main(String[] args) {

        BinarySearchTree BsT = new BinarySearchTree();
        Scanner scanner = new Scanner(System.in);
        int valuesRemaining = 10;

        while(valuesRemaining != 0)
        {
            System.out.print("Enter the value: ");
            int value = scanner.nextInt();
            BsT.insert(value);
            valuesRemaining--;
        }
        BsT.prettyDisplay();
    }
}
