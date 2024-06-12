public class Main {
    public static void main(String[] args)
    {
        Traversal t = new Traversal();
        t.sortedArrayInsert(new int[]{1,2,3,4,5,6,7,8,9,10});

        t.prettyDisplay();
        t.printInorder();
        System.out.println();
        t.printPreOrder();
        System.out.println();
        t.printPostOrder();
    }
}
