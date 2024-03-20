package Zoho.newworld;

import java.util.*;

public class BikeTrip {
    public static void main(String[] args) {
        int[] persons = new int[] { 1, 2, 4, 3, 1, 1, 2, 5 };
        int K = 5;
        int bike_limit = 2;

        int trip_count = 0;
        int cn = 0;
        while (cn < persons.length) {
            int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
            int min_index = 0, max_index = 0;
            for (int i = 0; i < persons.length; i++) {
                if (persons[i] == K) {
                    max = persons[i];
                    max_index = i;
                    min = persons[i];
                    min_index = i;
                } else {
                    if (persons[i] > max && persons[i] != -1 && persons[i] < K) {
                        max = persons[i];
                        max_index = i;
                    }
                    if (persons[i] < min && persons[i] != -1 && persons[i] < K) {
                        min = persons[i];
                        min_index = i;
                    }
                }

            }
            persons[max_index] = -1;
            persons[min_index] = -1;
            if (min_index == max_index) {
                cn++;
            } else {
                cn += 2;
            }
            trip_count++;
            System.out.println(min_index + " " + max_index);
            System.out.println(Arrays.toString(persons));
            System.out.println("Number of Trips: " + trip_count);

        }

    }
}
