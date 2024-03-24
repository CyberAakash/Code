package Zoho.newworld;

public class NCharSrtingPrint {
    public static void main(String[] args) {
        String str = "abbbcccccde";

        int len = str.length();

        int n = 1;
        char c = str.charAt(0);
        System.out.print(c);
        for(int i =0; i < len-1; i++) {
            if(str.charAt(i) != str.charAt(i+1)) {
                System.out.print(n);
                n = 0;
                c = str.charAt(i+1);
                System.out.print(c);
            }
            n++;
        }
        System.out.print(n);
    }
}
