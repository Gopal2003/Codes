public class X_RemoveDuplicateFromString {
    public static void main(String[] args)
    {
        String Ipstring = "aaaaabbbbbbccdefffghjjjiiikk",OrignalStr = " ";
        int indexOfIPstring = 0;
        System.out.println(getOriginalString(OrignalStr, Ipstring, indexOfIPstring));
    }

    public static String  getOriginalString(String originalString,String inputString,int indexOfInputString)
    {
        int lengthOfIPStr = inputString.length(),lengthOfOrgStr = originalString.length();
        if(indexOfInputString == lengthOfIPStr)
        {
            return originalString;
        }

        char ch_Of_IpStr_atIndex = inputString.charAt(indexOfInputString);
        char last_ch_Of_orgStr = originalString.charAt(lengthOfOrgStr - 1);
        if(last_ch_Of_orgStr == ch_Of_IpStr_atIndex)
        {
            originalString = getOriginalString(originalString, inputString, indexOfInputString + 1);
        }
        else
        {
            originalString = originalString + ch_Of_IpStr_atIndex ;
            originalString =  getOriginalString(originalString, inputString, indexOfInputString + 1);
        }

        return originalString;
        
    }
}
