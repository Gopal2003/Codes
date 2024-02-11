import java.util.*;
public class table {
    public static void main(String[] args) {
        System.out.println("Checking...");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number to finds its table");
        int n = sc.nextInt();
        Table(n);
    }
    public static void Table(int n)
    {
        for(int i = 2; i <= n; i++)
        {
            for(int j = 1; j <= 10; j++)
            {
                System.out.println(i + " x " + j + " = " + i*j);
            }
            System.out.println();
        }
    }
}

