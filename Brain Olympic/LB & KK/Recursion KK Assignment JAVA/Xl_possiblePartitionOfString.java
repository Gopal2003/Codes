import java.util.*;

public class Xl_possiblePartitionOfString {
    public static void main(String[] args)
    {
        List<List<String>>  allPossiblePartitions = new ArrayList<>();
        List<String> possiblePalindromicPartition = new ArrayList<>();

        getPossiblePartiton("cbbbcc", possiblePalindromicPartition, 0, allPossiblePartitions);
        for(List<String> d : allPossiblePartitions)
        {
            System.out.println(Arrays.toString(d.toArray()));
        }
    }

    public static void getPossiblePartiton(String s,List<String> possiblePalindromicPartition,int index,List<List<String>> allPossiblePartitions)
    {
        int length = s.length();

        if(index == length)
        {
            allPossiblePartitions.add(new ArrayList<>(possiblePalindromicPartition));
            return;
        }
        for(int i = index; i < length; i++)
        {
            // String str = s.substring(index,i + 1);
            if(isPalindrome(s,index,i))
            {
                String str = s.substring(index,i + 1);
                possiblePalindromicPartition.add(str);
                getPossiblePartiton(s, possiblePalindromicPartition,i + 1,allPossiblePartitions);
                possiblePalindromicPartition.remove(possiblePalindromicPartition.size() - 1);
            }
        }
    }

    public static boolean isPalindrome(String s,int start,int end)
    {
        // int length = s.length();
        // int start = 0,end = length - 1;
        while(start <= end)
        {
            if(s.charAt(start++) != s.charAt(end--))
            {
                return false;
            }
        }
        
        return true;
    }
}
