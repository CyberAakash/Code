package Zoho.newworld;

import java.util.HashMap;
import java.util.Map;

public class RemoveDuplicates {
    public String removeDuplicates(String input) {
        StringBuilder result = new StringBuilder();
        Map<Character, Integer> charCount = new HashMap<>();

        for (char ch : input.toCharArray()) {
            if (!charCount.containsKey(ch)) {
                result.append(ch);
                charCount.put(ch, 1);
            } else {
                char nextChar = (char) (ch + 1); // Get the next character
                // while (charCount.containsKey(ch)) {
                //     nextChar = nextChar == '9' ? '0' : (char) (nextChar + 1); // Increment, starting from '0' if '9' is
                //                                                               // reached
                // }
                if(nextChar == 58) {
                    nextChar = '0';
                } else if(nextChar == 123) {
                    nextChar = 97;
                } else if(nextChar == 91) {
                    nextChar = 'A';
                }
                result.append(nextChar);
                charCount.put(nextChar, 1);
            }
        }

        return result.toString();
    }

    public static void main(String[] args) {
        RemoveDuplicates remover = new RemoveDuplicates();

        // Test cases
        String input1 = "Java1234";
        System.out.println("Input: " + input1);
        System.out.println("Output: " + remover.removeDuplicates(input1));

        String input2 = "Python1223";
        System.out.println("Input: " + input2);
        System.out.println("Output: " + remover.removeDuplicates(input2));

        String input3 = "aBuzZ9900";
        System.out.println("Input: " + input3);
        System.out.println("Output: " + remover.removeDuplicates(input3));
    }
}
