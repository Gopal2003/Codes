

public class lV_FindFirstUpperCaseLetter {
    public static void main(String[] args)
    {
        String s = "Geeksforgeeks";
        int length = s.length();
        System.out.println(getFirstUpperCaseLetter(s,length - 1));
    }

    public static boolean getFirstUpperCaseLetter(String s,int index)
    {
        if(index < 0)
        {
            return false;
        }

        boolean found = (Character.isUpperCase(s.charAt(index)) || getFirstUpperCaseLetter(s, index - 1));

        return found;
    }


}
