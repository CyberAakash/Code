#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 10
#define MAX_NAME_LENGTH 100

// Structure to represent an item
typedef struct {
    char name[MAX_NAME_LENGTH];
    float price;
    int quantity;
} Item;

// Structure to represent an order
typedef struct {
    Item items[MAX_ITEMS];
    int itemCount;
    char deliveryPerson[MAX_NAME_LENGTH];
    int delivered;
} Order;

// Function to display the available food items
void displayMenu() {
    printf("Menu:\n");
    printf("1. Pizza - $10.0\n");
    printf("2. Burger - $5.0\n");
    printf("3. Pasta - $8.0\n");
    // Add more items as needed
    printf("\n");
}

// Function to add an item to the cart
void addItemToCart(Item* cart, int* itemCount, int itemId) {
    Item newItem;

    switch (itemId) {
        case 1:
            strcpy(newItem.name, "Pizza");
            newItem.price = 10.0;
            break;
        case 2:
            strcpy(newItem.name, "Burger");
            newItem.price = 5.0;
            break;
        case 3:
            strcpy(newItem.name, "Pasta");
            newItem.price = 8.0;
            break;
        // Add more cases for other items
        default:
            printf("Invalid item ID.\n");
            return;
    }

    newItem.quantity = 1;
    cart[*itemCount] = newItem;
    (*itemCount)++;

    printf("Item added to the cart.\n");
}

// Function to view the cart
void viewCart(Item* cart, int itemCount) {
    printf("Cart:\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d. %s - $%.2f\n", i + 1, cart[i].name, cart[i].price);
    }
    printf("\n");
}

// Function to place an order and assign a delivery person
void placeOrder(Order* order, Item* cart, int itemCount, char* deliveryPerson) {
    for (int i = 0; i < itemCount; i++) {
        order->items[i] = cart[i];
    }
    order->itemCount = itemCount;
    strcpy(order->deliveryPerson, deliveryPerson);
    order->delivered = 0;

    printf("Order placed successfully.\n");
}

// Function to update the status of an order
void updateStatus(Order* order) {
    order->delivered = 1;
    printf("Order marked as delivered.\n");
}

// Function to display the details of an order
void displayOrder(Order order) {
    printf("Order details:\n");
    printf("Items:\n");
    for (int i = 0; i < order.itemCount; i++) {
        printf("%s - $%.2f\n", order.items[i].name, order.items[i].price);
    }
    printf("Delivery person: %s\n", order.deliveryPerson);
    printf("Status: %s\n", order.delivered ? "Delivered" : "Not delivered");
}

int main() {
    Item cart[MAX_ITEMS];
    int itemCount = 0;
    Order order;
    char deliveryPerson[MAX_NAME_LENGTH];

    displayMenu();

    int choice;
    do {
        printf("Select an item (0 to exit): ");
        scanf("%d", &choice);

        if (choice != 0) {
            addItemToCart(cart, &itemCount, choice);
            viewCart(cart, itemCount);
        }
    } while (choice != 0);

    printf("Enter the name of the delivery person: ");
    scanf("%s", deliveryPerson);

    placeOrder(&order, cart, itemCount, deliveryPerson);

    updateStatus(&order);

    displayOrder(order);

    return 0;
}
