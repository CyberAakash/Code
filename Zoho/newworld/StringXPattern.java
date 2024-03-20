package Zoho.newworld;

public class StringXPattern {
    public static void main(String[] args) {
        String s = "PROGRAM";
        System.out.println("Original string: " + s);

        int len = s.length();

        // Method 1
        int row = 0, col = 0; // Starting point of pattern
        int rows = len, cols = len; // Number of rows and columns in the pattern

        while (row <= rows && col <= cols) {
            if(col > cols-1) {
                System.out.println();
                row++;
                col = 0;
            }
            if(row == col || row+col == len-1) {
                System.out.print(s.charAt(row));
            }
            else{
                System.out.print("  ");
            }
            col++;
            
        }

        // Method 2
        // for(int i=0;i<len;i++){
        // for(int j=0;j<len;j++){
        // if(i == j || i+j == len-1){
        // System.out.print(s.charAt(i));
        // }
        // else {
        // System.out.print(" ");
        // }
        // }
        // System.out.println();
        // }
    }
}
