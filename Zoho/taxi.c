#include <stdio.h>
#include <stdbool.h>

#define MAX_TAXIS 10

typedef struct {
    int taxiNumber;
    int pickupTime;
    int pickupPos;
    int destPos;
    int reachingTime;
    int travelTime;
    int totalCost;
} Taxi;

void printTravelHistory(Taxi taxis[], int numTaxis) {
    printf("\nTravel History:\n");
    for (int i = 0; i < numTaxis; i++) {
        printf("Taxi %d:\n", taxis[i].taxiNumber);
        printf("Pickup Time: %d\n", taxis[i].pickupTime);
        printf("Pickup Position: %d\n", taxis[i].pickupPos);
        printf("Destination Position: %d\n", taxis[i].destPos);
        printf("Reaching Time: %d\n", taxis[i].reachingTime);
        printf("Travel Time: %d\n", taxis[i].travelTime);
        printf("Total Cost: Rs. %d\n", taxis[i].totalCost);
        printf("--------------------\n");
    }
}

int findAvailableTaxi(Taxi taxis[], int numTaxis, int currentTime) {
    int minCost = -1;
    int availableTaxi = -1;

    for (int i = 0; i < numTaxis; i++) {
        if (taxis[i].reachingTime <= currentTime) {
            if (availableTaxi == -1 || taxis[i].totalCost < minCost) {
                availableTaxi = i;
                minCost = taxis[i].totalCost;
            }
        }
    }

    return availableTaxi;
}

int main() {
    int numTaxis;
    printf("Enter the number of taxis: ");
    scanf("%d", &numTaxis);

    if (numTaxis <= 0 || numTaxis > MAX_TAXIS) {
        printf("Invalid number of taxis. Exiting.\n");
        return 0;
    }

    Taxi taxis[MAX_TAXIS];

    for (int i = 0; i < numTaxis; i++) {
        taxis[i].taxiNumber = i + 1;
        taxis[i].pickupTime = 0;
        taxis[i].pickupPos = 0;
        taxis[i].destPos = 0;
        taxis[i].reachingTime = 0;
        taxis[i].travelTime = 0;
        taxis[i].totalCost = 0;
    }

    int currentTime = 0;
    int numCustomers = 0;

    while (true) {
        printf("\nCurrent Time: %d\n", currentTime);
        int pickupTime, pickupPos, destPos;
        printf("Enter pickup time, pickup position, and destination position (-1 to exit): ");
        scanf("%d", &pickupTime);

        if (pickupTime == -1) {
            break;
        }

        scanf("%d %d", &pickupPos, &destPos);

        int availableTaxi = findAvailableTaxi(taxis, numTaxis, currentTime);

        if (availableTaxi == -1) {
            printf("Rejected: No taxi available at the moment.\n");
        } else {
            int travelTime = (destPos - pickupPos) * 1;
            int totalCost = 500 + (destPos - pickupPos - 5) * 10;

            taxis[availableTaxi].pickupTime = pickupTime;
            taxis[availableTaxi].pickupPos = pickupPos;
            taxis[availableTaxi].destPos = destPos;
            taxis[availableTaxi].reachingTime = currentTime + travelTime;
            taxis[availableTaxi].travelTime = travelTime;
            taxis[availableTaxi].totalCost += totalCost;

            printf("Taxi Allocated: %d\n", taxis[availableTaxi].taxiNumber);
            printf("Reaching Time: %d\n", taxis[availableTaxi].reachingTime);
            printf("Total Cost: Rs. %d\n", taxis[availableTaxi].totalCost);

            numCustomers++;
        }

        currentTime++;
    }

    if (numCustomers > 0) {
        printTravelHistory(taxis, numTaxis);
    }

    return 0;
}
