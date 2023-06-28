// my friend attended interview and there he was asked for the program to solve. 
// the program is that there is totally two persons 
// for which their co-ordinates is given. 
// also  there are apples which fall at certain
//  cordinates. so the problem is that to find the 
// distance between the falling apple and the person. 
// but here is the constraint that is when the first 
// apple fall the first person catch the apple before 
// the apple touches the ground and their distance is 
// calculated. now the person 1 coordinates changes 
// such that he is in the coordinate of the first 
// apple. now the second apple falls and the person 2 
// is now try to catch the apple and his coordinates 
// also changes after catching the apple and the 
// corresponding distance is calculated. now the 
// third apple falls, the person 1 is now catch the 
// apple since the coordinates of person 1 changed 
// already by catching the apple 1 and the distance 
// is calculated. the process is going on n times. 
// so the input is n, apple cordinates each item when 
// the apple falls. the person 1 and 2 cordinates be 
// initialized in the program itself. the output is 
// the distance. Code in C.




// /////////////////////////////   1 
// #include <stdio.h>
// #include <math.h>

// // Function to calculate the distance between two points
// double calculateDistance(int x1, int y1, int x2, int y2) {
//     int xDiff = x2 - x1;
//     int yDiff = y2 - y1;
//     return sqrt(xDiff * xDiff + yDiff * yDiff);
// }

// int main() {
//     int n; // Number of apples
//     printf("Enter the number of apples: ");
//     scanf("%d", &n);

//     // Initialize the coordinates of person 1 and person 2
//     int person1X = 0;
//     int person1Y = 0;
//     int person2X = 0;
//     int person2Y = 0;

//     double totalDistance = 0.0;

//     // Iterate over the apples
//     for (int i = 1; i <= n; i++) {
//         int appleX, appleY;
//         printf("Enter the coordinates of apple %d: ", i);
//         scanf("%d %d", &appleX, &appleY);

//         // Calculate the distance between person 1 and the apple
//         double distance1 = calculateDistance(person1X, person1Y, appleX, appleY);
//         totalDistance += distance1;

//         // Update the coordinates of person 1
//         person1X = appleX;
//         person1Y = appleY;

//         // Calculate the distance between person 2 and the apple
//         double distance2 = calculateDistance(person2X, person2Y, appleX, appleY);
//         totalDistance += distance2;

//         // Update the coordinates of person 2
//         person2X = appleX;
//         person2Y = appleY;
//     }

//     printf("Total distance: %.2f\n", totalDistance);

//     return 0;
// }



#include <stdio.h>
#include <math.h>

// Function to calculate the distance between two points
double calculateDistance(int x1, int y1, int x2, int y2) {
    int xDiff = x2 - x1;
    int yDiff = y2 - y1;
    return sqrt(xDiff * xDiff + yDiff * yDiff);
}

int main() {
    int n; // Number of apples
    printf("Enter the number of apples: ");
    scanf("%d", &n);

    // Initialize the coordinates of person 1 and person 2
    int person1X = 0;
    int person1Y = 0;
    int person2X = 0;
    int person2Y = 0;

    // Array to store the distances
    double distances[n];

    // Variable to store the total distance
    double totalDistance = 0.0;

    // Iterate over the apples
    for (int i = 1; i <= n; i++) {
        int appleX, appleY;
        printf("Enter the coordinates of apple %d: ", i);
        scanf("%d %d", &appleX, &appleY);

        double distance; // Distance to be calculated for each apple

        // Check if it's person 1's turn to catch the apple
        if (i % 2 == 1) {
            // Calculate the distance between person 1 and the apple
            distance = calculateDistance(person1X, person1Y, appleX, appleY);

            // Update the coordinates of person 1
            person1X = appleX;
            person1Y = appleY;
        } else {
            // Calculate the distance between person 2 and the apple
            distance = calculateDistance(person2X, person2Y, appleX, appleY);

            // Update the coordinates of person 2
            person2X = appleX;
            person2Y = appleY;
        }

        // Store the distance in the array
        distances[i - 1] = distance;

        // Add the distance to the total distance
        totalDistance += distance;
    }

    // Display the distances with person names and calculate the total distance
    printf("\nDistance Details:\n");
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("Apple %d: Person 1 - %.2f\n", i + 1, distances[i]);
        } else {
            printf("Apple %d: Person 2 - %.2f\n", i + 1, distances[i]);
        }
    }
    printf("Total Distance: %.2f\n", totalDistance);

    return 0;
}

