import java.util.Random;

public class LargeData{
    public static void main(String[] args)
    {
        String ans = getRandomString(5);
        System.out.println(ans);
    }

    public static String getRandomString(int length)
    {
        Random random = new Random();
        StringBuffer sb = new StringBuffer();
        int i = length;
        while(i != 0)
        {
            int value = 97 + (int)(26 * random.nextFloat());
            sb.append((char)value);
            i--;
        }

        return sb.toString();
    }
}