public class dummy {
    public static void main(String[] args) {
        
        int n = 4,k = 3;
        int result = getBit(n,k);

        System.out.println(result);
    }

    public static int getBit(int n,int k)
    {
        if(n == 1 && k == 1)
        {
            return 0;
        }

        int lengthOfBits = (int)Math.pow(2,n - 1);
        int halfOfLength = lengthOfBits / 2;
        if(k <= halfOfLength)
        {
            int result = getBit(n - 1,k);
            return result;
        }

        if(n % 2 == 0)
        {
            int complimentBitPos = k - (halfOfLength);
            int bitAtk = getBit(n - 1,complimentBitPos);
            int complimentOfbitAtK = (bitAtk == 0) ? 1 : 0;
            return complimentOfbitAtK;
        }
        else
        {
            int mirrorPosOfbit = lengthOfBits - k + 1;
            int mirrorBit = getBit(n - 1, mirrorPosOfbit);

            return mirrorBit;
        }
    }
}