import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<List<Integer>> ans = new ArrayList<>();

        //Creating the object of BSF.
        BFS tree = new BFS();
        Scanner scanner = new Scanner(System.in);
        tree.populate(scanner);
        ans = tree.BreadthFirstSearch();

        for(List<Integer> a : ans)
        {
            System.out.print(a.toString() + " ");
        }
    }
}
