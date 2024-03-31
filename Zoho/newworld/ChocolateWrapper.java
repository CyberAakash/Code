package Zoho.newworld;

public class ChocolateWrapper {
    public static void main(String[] args) {
        int money = 10;
        int price = 1;
        int wrappers = 3;
        int choco = 1;
        int max_visit = 2;

        int total_choco = money/price;
        int current_wrappers = total_choco / wrappers;
        int balance_wrappers = total_choco % wrappers;
        total_choco += current_wrappers; 
        balance_wrappers += current_wrappers;
        max_visit--;
        while(max_visit > 0) {
            int new_choco = balance_wrappers / wrappers;
            balance_wrappers = (balance_wrappers % 3) + new_choco;
            total_choco += new_choco;
            max_visit--;
        }

        System.out.println("Total Chocolate can eat: "+ total_choco);
        System.out.println("Balance wrappers left in hand: "+ balance_wrappers);
    }
}
