import java.util.*;
public class Main {
    public static void main(String[] args) {
        AVL avL = new AVL();
        Scanner scanner = new Scanner(System.in);
    
        /* 
        int i = 10;
        
        while(i > 0)
        {
            int value = scanner.nextInt();
            avL.populate(value);
            i--;
        }
            */
            
            

        //Internrionally adding the nodes in ascending order in order to activate the self-balancing property of AVL tree;
        for(int i = 0; i < 20; i++)
        {
            avL.populate(i);
        }

        avL.prettyDisplay();
        System.out.println();
        System.out.println(avL.height());
        // System.out.println(avL.getHeight());
    }
}
