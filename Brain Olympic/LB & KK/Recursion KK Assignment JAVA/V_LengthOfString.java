public class V_LengthOfString {
    public static void main(String[] args)
    {
        String s = "Gopal#";
        System.out.println(getLength(s, 0));
    }

    public static int getLength(String s,int index)
    {
        char ch = s.charAt(index);
        if(ch == '#')
        {
            return index;
        }

        return(getLength(s, index + 1));
    }
}
