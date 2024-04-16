import java.util.*;

public class Xlll_CombinationSum {
    public static void main(String[] args) {
        List<List<Integer>> ans = new ArrayList<>();// Store all the combinations whose sum is equal to target.
        List<Integer> tempList = new ArrayList<>(); // Store curr combinations whose sum is equal to target.
        int candidates[] = {2,3,6,7};
        int target = 7;
        Arrays.sort(candidates);
        int startIndex = 0;
        getCombinations(ans, tempList, startIndex, target, candidates);
        for(List<Integer> temp : ans)
        {
            for(int num : temp)
            {
                System.out.print(num + " ");
            }
            System.out.println();
        }
    }

    public static void getCombinations(List<List<Integer>> ans, List<Integer> tempList, int startIndex, int target,
            int candidates[]) {
        int n = candidates.length;
        if (target == 0) {
            ans.add(new ArrayList<>(tempList));
            ans.add(tempList);
            return;
        }

        for (int i = startIndex; i < n; i++) {
            if (target - candidates[i] < 0)
                return;
            tempList.add(candidates[i]);
            getCombinations(ans, tempList, i, target - candidates[i], candidates);
            tempList.remove(tempList.size() - 1);
        }
    }
}
