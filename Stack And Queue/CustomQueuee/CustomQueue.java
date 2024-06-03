public class CustomQueue{
    int end = -1;
    private static final int DEFAULT_SIZE = 10;
    private int[] data;

    CustomQueue()
    {
        this(DEFAULT_SIZE);
    }

    CustomQueue(int size)
    {
        this.data = new int[size];
    }

    public void push(int item) throws CustomQueueException
    {
        if(isFull())
        {
            throw new CustomQueueException("Queue is Full!");
        }

        end++;
        data[end] = item;
    }

    public int pop() throws CustomQueueException
    {
        if(isEmpty())
        {
            throw new CustomQueueException("Queue is Empty!");
        }

        int poppedValue = data[0];

        //Shift the values towards the left.

        for(int i = 1; i <= end; i++)
        {
            data[i-1] = data[i];
        }

        end--;

        return poppedValue;
    }

    public boolean isFull()
    {
        if(end == data.length - 1)
        {
            return true;
        }

        return false;
    }

    public boolean isEmpty()
    {
        if(end == -1)
        {
            return true;
        }

        return false;
    }

    public void display()
    {
        for(int i = 0; i <= end; i++)
        {
            System.out.print(data[i] + " <- ");
        }

        System.out.println("END");
    }
}