import java.util.Arrays;

public class CustomArrayList{

    private int[] arr;
    private static int DEFAULT_SIZE = 10;
    private int size = 0;// also acting like the index of the array.

    public CustomArrayList(){
        this.arr = new int[DEFAULT_SIZE];
    }

    public void add(int num)
    {
        if(isFull())
        {
            resize();
        }
        
        arr[size++] = num;
    }

    public boolean isFull()
    {
        return size == arr.length;
    }

    public void resize()
    {
        int temp[] = new int[arr.length * 2];

        for(int i = 0; i < arr.length; i++)
        {
            temp[i] = arr[i];
        }

        arr = temp;
    }


    public int remove()
    {
        int removed = arr[size--];// The value is not actually removed, instead the index value is decreasd by 1. Hence, whenever a new value enter, it override the next value;
        return removed;
    }

    public int get(int index)
    {
        return arr[index];
    }

    public int size()
    {
        return arr.length;
    }

    public void set(int index,int value)
    {
        arr[index] = value;
    }

    public String toString()
    {
        return "CustomArrayList{" + "data= " + Arrays.toString(arr) + ", size=" + size + "}";
    }

    public static void main(String[] args) {
        
        CustomArrayList arr = new CustomArrayList();
        arr.add(3);
        arr.add(4);
        arr.add(5);

        System.out.println(arr);
        System.out.println(arr.remove());//removes the curr item according to the size indexer.
        arr.set(3, 6);
        System.out.println(arr);

    }
}