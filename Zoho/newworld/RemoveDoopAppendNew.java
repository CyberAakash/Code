package Zoho.newworld;

import java.lang.*;
import java.util.*;

public class RemoveDoopAppendNew {
    public static void main(String[] args) {

        // String str = "Java1234";
        // String str = "Python1223";
        String str = "aBuzZ9900";

        StringBuilder sb = new StringBuilder(str);

        Map<Integer, Integer> intmap = new HashMap<Integer, Integer>();
        Map<Character, Integer> charmap = new HashMap<Character, Integer>();

        int startNo = 0;
        char startChar = 'A';
        int len = str.length();
        for (int i = 0; i < len; i++) {
            if (Character.isDigit(str.charAt(i))) {
                if (!intmap.containsKey((str.charAt(i) - '0'))) {
                    intmap.put((str.charAt(i) - '0'), 1);
                } else {
                    sb.setCharAt(i, (char) (startNo + '0'));
                    if (!intmap.containsKey(startNo)) {
                        intmap.put(startNo, 1);
                    }
                    startNo++;
                }
            } else {
                char temp = str.charAt(i);
                char lowerCaseKey = Character.toLowerCase(temp);
                char upperCaseKey = Character.toUpperCase(temp);

                if (!(charmap.containsKey(lowerCaseKey) || charmap.containsKey(upperCaseKey))) {
                    charmap.put(temp, 1);
                    if (startChar == upperCaseKey) {
                        startChar += 1;
                    }
                } else {
                    if (Character.isLowerCase(temp)) {
                        char low = Character.toLowerCase(startChar);
                        sb.setCharAt(i, low);
                    } else {
                        char high = Character.toUpperCase(startChar);
                        sb.setCharAt(i, high);
                    }
                    char lowerKey = Character.toLowerCase(startChar);
                    char upperKey = Character.toUpperCase(startChar);
                    if (!charmap.containsKey(lowerKey) || !charmap.containsKey(upperKey)) {
                        charmap.put(startChar, 1);
                    }
                    startChar += 1;
                }
            }
        }

        System.out.println("Start Number: " + startNo);
        System.out.println("Start Character: " + startChar);
        System.out.println("Output: " + sb);

    }
}
