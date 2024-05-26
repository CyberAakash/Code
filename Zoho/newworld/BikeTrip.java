package Zoho.newworld;

import java.util.*;

public class BikeTrip {
    public static void main(String[] args) {
        int[] persons = new int[] { 4, 2, 4, 3, 2, 2, 5 };
        int K = 5;
        
        Arrays.sort(persons); //2,2,2,3,4,4,5
        int left = 0, right = persons.length - 1;
        int trip = 0;

        while(left <= right) {
            if(persons[left] + persons[right] <= K) {
                left++;
            }
            right--;
            trip++;
        }

        System.out.println("Trip count: "+ trip);

    }
}
