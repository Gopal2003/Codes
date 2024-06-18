public class Main {
    public static void main(String[] args) {

        SegmentTrees ST = new SegmentTrees();
        int arr[] = new int[]{3,8,7,6,-2,-8,4,9};

        ST.constructTree(arr);
        ST.display();

        //Checking the query and Update Function.
        System.out.println(ST.query(4, 5)); // sum from index 4 to 5 is -10;
        ST.update(4, 8);                // After updation, the value of index 4 changes to 8.
        System.out.println(ST.query(4,5)); // sum of 8 and -8 is 0.
    }
}
