// package CustomStackk;
public class CustomStack{
    private int ptr = -1;
    private static int DEFAULT_SIZE = 10;
    protected int[] data;

    CustomStack()
    {
        this(DEFAULT_SIZE);
    }

    CustomStack(int size)
    {
        this.data = new int[size];
    }

    public void push(int value) throws StackException
    {
        if(isFull()) 
        {
            throw new StackException("Stack is full (OverFlow)");
        }
        ptr++;

        data[ptr] = value;
    }

    public int pop() throws StackException
    {
        if(isEmpty())
        {
            throw new StackException("Stack is empty (UnderFlow)");
        }

        int poppedData = data[ptr];
        ptr--;

        return poppedData;
    }

    public int peek() throws StackException
    {
        if(isEmpty()) 
        {
            throw new StackException("Stack is empty (UnderFlow)");
        }

        int peekValue = data[ptr];

        return peekValue;
    }

    public boolean isFull()
    {
        if(ptr == data.length - 1)
        {
            return true;
        }

        return false;
    }

    public boolean isEmpty()
    {
        if(ptr == -1)
        {
            return true;
        }

        return false;
    }
}