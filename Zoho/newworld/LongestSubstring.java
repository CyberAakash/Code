package Zoho.newworld;

public class LongestSubstring {
    
    public int lengthOfLongestSubstring(String s) {
        // String str ="";
        // if(s.length()==1){
        // return 1;
        // }
        // int count =0;
        // int max =0;
        // for(int i =0;i<s.length();i++){
        // if(str.indexOf(s.charAt(i)) == -1){
        // str+= s.charAt(i);
        // count++;
        // }
        // else{
        // int z = str.indexOf(s.charAt(i));
        // str = str.substring(z+1);
        // if(max < count ){
        // max = count;

        // }
        // count = str.length();
        // i--;
        // }
        // }
        // if(max < count ){
        // max = count;
        // }
        // return max;

        if (s == null) {
            return 0;
        }

        if (s.length() == 1) {
            return 1;
        }

        String res = "";
        int cnt = 0;
        int max = 0;
        for(int i = 0; i < s.length(); i++) {
            if(res.indexOf(s.charAt(i)) == -1) {
                res += s.charAt(i);
                cnt++;
            } else {
                int k = res.indexOf(s.charAt(i));
                res = res.substring(k+1);

                if(cnt > max) {
                    max = cnt;
                }

                cnt = res.length();
                i--;
            }
        }

        if(max < cnt) {
            max = cnt;
        }

        return max;
    }
}




// Given a
// string s, find
// the length
// of the
// longest 
// substring
// without repeating characters.

// Example 1:

// Input:s="abcabcbb"Output:3 Explanation:
// The answer is"abc",
// with the
// length of 3. Example 2:

// Input:s="bbbbb"Output:1 Explanation:
// The answer is"b",
// with the
// length of 1. Example 3:

// Input:s="pwwkew"Output:3 Explanation:
// The answer is"wke",
// with the
// length of 3.
// Notice that
// the answer
// must be
// a substring,"pwke"
// is a
// subsequence and
// not a substring
// .