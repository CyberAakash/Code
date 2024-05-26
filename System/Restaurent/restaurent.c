#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

struct MenuItem {
    char name[50];
    float price;
};

struct OrderItem {
    char name[50];
    int quantity;
};

struct MenuItem menu[MAX_ITEMS];
struct OrderItem order[MAX_ITEMS];
int itemCount = 0;
int orderCount = 0;

void addItemToMenu(const char *name, float price) {
    if (itemCount < MAX_ITEMS) {
        struct MenuItem item;
        strcpy(item.name, name);
        item.price = price;
        menu[itemCount++] = item;
        printf("Item added to the menu.\n");
    } else {
        printf("Maximum menu items reached.\n");
    }
}

void displayMenu() {
    printf("Menu:\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d. %s - $%.2f\n", i + 1, menu[i].name, menu[i].price);
    }
}

void takeOrder(int itemIndex, int quantity) {
    if (itemIndex >= 0 && itemIndex < itemCount) {
        struct MenuItem item = menu[itemIndex];
        struct OrderItem orderItem;
        strcpy(orderItem.name, item.name);
        orderItem.quantity = quantity;
        order[orderCount++] = orderItem;
        printf("Order placed.\n");
    } else {
        printf("Invalid item index.\n");
    }
}

void displayOrder() {
    printf("Order details:\n");
    float total = 0.0;
    for (int i = 0; i < orderCount; i++) {
        struct OrderItem orderItem = order[i];
        printf("%s - %d\n", orderItem.name, orderItem.quantity);
        for (int j = 0; j < itemCount; j++) {
            if (strcmp(orderItem.name, menu[j].name) == 0) {
                total += menu[j].price * orderItem.quantity;
                break;
            }
        }
    }
    printf("Total bill: $%.2f\n", total);
}

int main() {
    int choice;
    do {
        printf("\nRestaurant Management System\n");
        printf("1. Add item to menu\n");
        printf("2. Display menu\n");
        printf("3. Place order\n");
        printf("4. Display order details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    char name[50];
                    float price;
                    printf("Enter item name: ");
                    scanf("%s", name);
                    printf("Enter item price: ");
                    scanf("%f", &price);
                    addItemToMenu(name, price);
                }
                break;
            case 2:
                displayMenu();
                break;
            case 3:
                {
                    int itemIndex, quantity;
                    printf("Enter item index: ");
                    scanf("%d", &itemIndex);
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    takeOrder(itemIndex - 1, quantity);
                }
                break;
            case 4:
                displayOrder();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
