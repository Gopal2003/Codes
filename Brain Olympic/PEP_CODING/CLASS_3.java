public class CLASS_3 {
    public static void main(String[] args) {
        int n = 6;
        System.out.println(pairFriends(n));
    }

    public static int pairFriends(int n)
    {
        if(n == 0) return 1;
        if(n < 0) return 0;

        int count = 0;
        count += pairFriends(n - 1);
        count += pairFriends(n - 2) * (n - 1);

        return count;
    }
}
