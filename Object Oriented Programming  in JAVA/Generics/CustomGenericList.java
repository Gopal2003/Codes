import java.util.*;

public class CustomGenericList<T>{ // T is the type of the List- Integer,String...

    private Object[] arr;
    private static int DEFAULT_SIZE = 10;
    private int size = 0;// also acting like the index of the array.

    public CustomGenericList(){
        arr = new Object[DEFAULT_SIZE];
    }

    public void add(T val)
    {
        if(isFull())
        {
            resize();
        }
        
        arr[size++] = val;
    }

    public boolean isFull()
    {
        return size == arr.length;
    }

    public void resize()
    {
        Object temp[] = new Object[arr.length * 2];

        for(int i = 0; i < arr.length; i++)
        {
            temp[i] = arr[i];
        }

        arr = temp;
    }


    public T remove()
    {
        @SuppressWarnings("unchecked")
        T removed = (T)(arr[size--]);// The value is not actually removed, instead the index value is decreasd by 1. Hence, whenever a new value enter, it override the next value;
        return removed;
    }

    @SuppressWarnings("unchecked")
    public T get(int index)
    {
        return (T)arr[index];
    }

    public int size()
    {
        return arr.length;
    }

    public void set(int index,T value)
    {
        arr[index] = value;
    }

    public String toString()
    {
        return "CustomArrayList{" + "data= " + Arrays.toString(arr) + ", size=" + size + "}";
    }

    public static void main(String[] args) {
        
        CustomGenericList<Integer> list = new CustomGenericList<>();

        list.add(5);
        list.add(6);
        list.add(7);
        // list.add("gopal"); // error as the Generic is Integer but we are adding String.

        CustomGenericList<String> list2 = new CustomGenericList<>();
        list2.add("Gopal");
        System.out.println(list2);
        
    }
}
