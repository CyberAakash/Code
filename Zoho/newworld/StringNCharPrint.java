package Zoho.newworld;

public class StringNCharPrint {
    public static void main(String[] args) {
        String str = "ca2bc5";

        int len = str.length();
        int n = 0;
        char c = ' ';
        for(int i = 0; i < len; i++) {
            if(Character.isDigit(str.charAt(i))) {
                n = str.charAt(i) - '0';
                if(n!=0) {
                    while(n>0) {
                        System.out.print(c);
                        n--;
                    }
                }
            } else {
                if(!Character.isDigit(str.charAt(i)) && !Character.isDigit(str.charAt(i+1)) && str.charAt(i) != str.charAt(i+1)) {
                    System.out.print(str.charAt(i));
                    continue;
                }
                c = str.charAt(i);
            }
        }
    }
    
}
