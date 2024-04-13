public class lX_BalancedParanthesis {
    public static void main(String[] args)
    {
        String s = "[()](){()}";
        String opens = "";
        System.out.print(checkParanthesis(s, 0,opens));
    }


    public static boolean checkParanthesis(String s,int index,String openBrackets)
    {
        int lengthOfS = s.length(),lengthOfOpenBrackets = openBrackets.length();
        if(index == lengthOfS)
        {
            if(lengthOfOpenBrackets == 0)
            {
                return true;
            }

            else
            {
                return false;
            }
        }

        char ch = s.charAt(index);
        if(ch == '(' || ch == '[' || ch == '{')
        {
            openBrackets = openBrackets + ch;
        }
        else
        {
            char lastChar = openBrackets.charAt(lengthOfOpenBrackets - 1);
            if(ch == ')' && lastChar == '(')
            {
                openBrackets = openBrackets.substring(0,lengthOfOpenBrackets - 1 );
            }
            else if(ch == ']' && lastChar == '[')
            {
                openBrackets = openBrackets.substring(0,lengthOfOpenBrackets - 1);
            }
            else if(ch == '}' && lastChar == '{')
            {
               openBrackets = openBrackets.substring(0,lengthOfOpenBrackets - 1);
            }
        }
        
        return(checkParanthesis(s, index + 1,openBrackets));
    }
}
