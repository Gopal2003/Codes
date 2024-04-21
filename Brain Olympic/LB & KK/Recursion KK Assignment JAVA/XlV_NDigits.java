public class XlV_NDigits {
    public static void main(String[] atgs)
    {
        int n = 5;
        int start = (int)Math.pow(10,n - 1);
        int end = (int)Math.pow(10,n);

        if(n == 1)
        {
            start = 0;
        }

        //! Time limit Exceeded.
        // printDigits(start, end);

        for(int i = start; i < end; i++)
        {
            if(check_Isincreacing(i))
            {
                System.out.print(i + " ");
            }
        }
    }
    
    //!Recursive approach
    public static void printDigits(int start,int end)
    {
        if(start == end)
        {
            return;
        }

        if(isIncreasing(start))
        {
            System.out.print(start + " ");
            printDigits(start + 1, end);
        }
        else
        {
            printDigits(start + 1, end);
        }
    }

    public static boolean isIncreasing(int n) {
        String num = Integer.toString(n);
        for (int i = 0; i < num.length() - 1; i++) {
            if (num.charAt(i) >= num.charAt(i + 1)) {
                return false;
            }
        }
        return true;
    }

    public static boolean check_Isincreacing(int value)
    {
        int temp = value;

        while(temp != 0)
        {
            int last_first_digit = temp % 10;
            int last_second_digit = (temp / 10) % 10;
            if(last_first_digit <= last_second_digit)
            {
                return false;
            }

            temp = temp / 10;
        }

        return true;
    }
}