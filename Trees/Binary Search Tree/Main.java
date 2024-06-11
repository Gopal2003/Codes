import java.util.*;
public class Main {
    public static void main(String[] args) {

        BinarySearchTree BsT = new BinarySearchTree();
        Scanner scanner = new Scanner(System.in);
        int valuesRemaining = 10;

        // while(valuesRemaining != 0)
        // {
        //     System.out.print("Enter the value: ");
        //     int value = scanner.nextInt();
        //     BsT.insert(value);
        //     valuesRemaining--;
        // }
        BsT.sortedArrayInsert(new int[]{1,2,3,4,5,6,7,8,9,10});
        BsT.prettyDisplay();
        System.out.println();
        System.out.println("Height of the Binary Search Tree is: " + BsT.root.height);
    }
}
