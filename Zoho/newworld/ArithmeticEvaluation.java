package Zoho.newworld;

import java.lang.*;
import java.util.*;

public class ArithmeticEvaluation {
    public static void main(String[] args) {
        // Write your code here
        // String expression = "((2+3)+(3*2))";
        String expression = "((6+9)/(5-2))";
        int len = expression.length();
        Stack<Character> box = new Stack<Character>();
        int temp = 0;
        char op = ' ';
        char sop = ' ';
        // StringBuilder res = new StringBuilder();
        int res = 0;
        for (int i = 0; i < len; i++) {
            if (expression.charAt(i) == '(') {
                box.push('(');
            } else {
                if (Character.isDigit(expression.charAt(i))) {

                    if (op != ' ') {
                        System.out.println("DIGIT: " + (expression.charAt(i) - '0'));

                        if (op == '+') {
                            temp += expression.charAt(i) - '0';
                        } else if (op == '-') {
                            temp -= expression.charAt(i) - '0';
                        } else if (op == '*') {
                            temp *= expression.charAt(i) - '0';
                        } else if (op == '/') {
                            temp /= expression.charAt(i) - '0';
                        }
                        op = ' ';
                    } else {
                        System.out.println("before: " + Character.getNumericValue(expression.charAt(i)));
                        temp = Character.getNumericValue(expression.charAt(i));
                    }

                } else if (expression.charAt(i) == ')' && box.peek() == '(') {
                    System.out.println("Temp: " + temp);

                    if (sop != ' ') {
                        System.out.println("Will it execute");
                        if (sop == '+') {
                            res += temp;
                        } else if (sop == '-') {
                            res -= temp;
                        } else if (sop == '*') {
                            res *= temp;
                        } else if (sop == '/') {
                            res /= temp;
                        }
                        sop = ' ';
                    } else {
                        res += temp;

                    }
                    System.out.println("Peek check");
                    System.out.println("SOP: " + sop);
                    System.out.println("Temp: " + temp);
                    System.out.println(expression + " = " + res);

                    temp = 0;
                    box.pop();
                    System.out.println("Stack: " + box);

                } else {

                    if (i + 1 < len && expression.charAt(i + 1) == '(') {
                        box.push(expression.charAt(i));
                        sop = expression.charAt(i);
                    } else {
                        op = expression.charAt(i);
                    }
                }
            }
        }
        System.out.println("OP: " + op);
        System.out.println("Temp: " + temp);
        System.out.println("Stack: " + box);
        System.out.println(expression + " = " + res);
    }

}
