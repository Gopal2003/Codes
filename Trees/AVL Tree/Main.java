import java.util.*;
public class Main {
    public static void main(String[] args) {
        AVL avL = new AVL();
        Scanner scanner = new Scanner(System.in);
        int i = 10;

        while(i > 0)
        {
            int value = scanner.nextInt();
            avL.populate(value);
            i--;
        }

        avL.prettyDisplay();
        System.out.println(avL.getHeight());
    }
}
