#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROOMS 100

typedef struct {
    int roomNumber;
    char customerName[50];
    int booked;
} Room;

Room hotelRooms[MAX_ROOMS];

void initializeRooms() {
    int i;
    for (i = 0; i < MAX_ROOMS; i++) {
        hotelRooms[i].roomNumber = i + 1;
        strcpy(hotelRooms[i].customerName, "");
        hotelRooms[i].booked = 0;
    }
}

void bookRoom() {
    int roomNumber;
    char customerName[50];
    
    printf("Enter the room number: ");
    scanf("%d", &roomNumber);
    
    if (roomNumber < 1 || roomNumber > MAX_ROOMS) {
        printf("Invalid room number.\n");
        return;
    }
    
    if (hotelRooms[roomNumber - 1].booked) {
        printf("Room already booked.\n");
        return;
    }
    
    printf("Enter the customer name: ");
    scanf(" %[^\n]s", customerName);
    
    strcpy(hotelRooms[roomNumber - 1].customerName, customerName);
    hotelRooms[roomNumber - 1].booked = 1;
    
    printf("Room booked successfully.\n");
}

void displayRooms() {
    int i;
    printf("\nRoom\tCustomer Name\tStatus\n");
    printf("----\t-------------\t------\n");
    
    for (i = 0; i < MAX_ROOMS; i++) {
        printf("%d\t%s\t%s\n", hotelRooms[i].roomNumber, hotelRooms[i].customerName,
               hotelRooms[i].booked ? "Booked" : "Available");
    }
}

int main() {
    int choice;
    
    initializeRooms();
    
    do {
        printf("\nHotel Management System\n");
        printf("1. Book a room\n");
        printf("2. View room status\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                bookRoom();
                break;
            case 2:
                displayRooms();
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 3);
    
    return 0;
}
