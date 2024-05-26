package Zoho.newworld;

import java.util.*;

public class Permutation {
    
    public List<String> find_permutation(String S) {
        List<String> result = new ArrayList<>();
        generatePermutations(S.toCharArray(), 0, result);
        Collections.sort(result); // Sort the result lexicographically
        return result;
    }

    private void generatePermutations(char[] arr, int start, List<String> result) {
        if (start == arr.length) {
            result.add(new String(arr));
            return;
        }
        Set<Character> seen = new HashSet<>();
        for (int i = start; i < arr.length; i++) {
            if (!seen.contains(arr[i])) {
                seen.add(arr[i]);
                swap(arr, start, i);
                generatePermutations(arr, start + 1, result);
                swap(arr, start, i); // Backtrack
            }
        }
    }

    private void swap(char[] arr, int i, int j) {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main(String[] args) {
        Permutation solution = new Permutation();

        String input1 = "ABC";
        List<String> result1 = solution.find_permutation(input1);
        System.out.println("Output for input ABC:");
        for (String perm : result1) {
            System.out.print(perm + " ");
        }
        System.out.println();

        String input2 = "read";
        List<String> result2 = solution.find_permutation(input2);
        System.out.println("Output for input ABSG:");
        for (String perm : result2) {
            System.out.print(perm + " ");
        }
        System.out.println();
        System.out.println("Read pos: " + (result2.indexOf("read")+1));
    }
}
