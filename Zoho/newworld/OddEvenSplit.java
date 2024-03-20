package Zoho.newworld;

public class OddEvenSplit {
    public static void main(String[] args) {
        int n = 3;
        String s = "Hacker";
        StringBuilder sb = new StringBuilder();
        int len = s.length();
        int cn = 0;
        while (cn < n) {
            System.out.println(cn);
            int i = cn;
            while (i < len) {

                sb.append(s.charAt(i));

                i += n;
            }
            sb.append(" ");
            cn++;
        }

        System.out.println(sb);
    }
}
