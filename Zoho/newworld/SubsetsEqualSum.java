package Zoho.newworld;

// Kind
import java.util.*;

public class SubsetsEqualSum {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };
        int N = 5;
        List<List<Integer>> subsets = new ArrayList<>();
        findSubsets(arr, 0, new ArrayList<>(), 0, N, subsets);
        for (List<Integer> subset : subsets) {
            System.out.println(subset);
        }
    }

    private static void findSubsets(int[] arr, int index, List<Integer> current, int currentSum, int targetSum,
            List<List<Integer>> subsets) {
        if (currentSum == targetSum) {
            subsets.add(new ArrayList<>(current));
            return;
        }
        if (index == arr.length || currentSum > targetSum) {
            return;
        }
        // Include the current element
        current.add(arr[index]);
        findSubsets(arr, index + 1, current, currentSum + arr[index], targetSum, subsets);
        // Exclude the current element
        current.remove(current.size() - 1);
        findSubsets(arr, index + 1, current, currentSum, targetSum, subsets);
    }
}
