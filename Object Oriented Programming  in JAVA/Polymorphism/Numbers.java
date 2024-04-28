public class Numbers{

    static int sum(int a, int b)
    {
        return a+b;
    }

    int sum(int a,int b,int c)
    {
        return a + b + c;
    }
    public static void main(String[] args) {
        System.out.println(sum(1,2));
        // System.out.println(sum(1,2,c));//!error

        Numbers n = new Numbers();
        System.out.println(n.sum(1, 2, 3));

    }
}