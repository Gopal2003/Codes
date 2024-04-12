public class Vlll_SumOfDigitOfNumber {
    public static void main(String[] args)
    {
        int number = 1234567;
        System.out.println("Result: " + getSumOfDigits(number,0));
    }

    public static int getSumOfDigits(int number,int sum)
    {
        if(number == 0)
        {
            return sum;
        }

        int digit = number % 10;
        sum = sum + digit;
        int result = getSumOfDigits(number/10, sum);

        return result;
    }

    
}
