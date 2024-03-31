package Zoho.newworld;

public class Zigzag {
    public static void main(String[] args) {
        int[][] matrix = new int[][] { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

        int rows = matrix.length;
        int cols = matrix[0].length;
        int row = 0, col = 0;
        boolean goingDown = false;

        while (row < rows && col < cols) {
            System.out.print(matrix[row][col] + " ");
            if (goingDown) {
                if (row == rows - 1) {
                    col++;
                    goingDown = false;
                } else if (col == 0) {
                    row++;
                    goingDown = false;
                } else {
                    row++;
                    col--;
                }
            } else {
                if (col == cols - 1) {
                    row++;
                    goingDown = true;
                } else if (row == 0) {
                    col++;
                    goingDown = true;
                } else {
                    row--;
                    col++;
                }
            }
        }
    }
}
