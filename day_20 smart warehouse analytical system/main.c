/*day20_<AP25110090157>_<nayansairaj>.c*/
#include <stdio.h>
#define MAX_PRODUCTS 20
int productID[MAX_PRODUCTS];
int quantity[MAX_PRODUCTS];
int price[MAX_PRODUCTS];
int totalProducts = 0;
void addProduct();
void searchProduct();
void updateQuantity();
void rackReport();
void stockValueReport();
void displayAll();
void addProduct() 
{
    if (totalProducts >= MAX_PRODUCTS)
     {
        printf("\nWarehouse is full! Cannot add more products.\n");
        return;
    }
    int id, qty, prc;
    printf("\nEnter Product ID: ");
    scanf("%d", &id);
    for (int i = 0; i < totalProducts; i++)
     {
        if (productID[i] == id)
         {
            printf("\n Duplicate Product ID! Product already exists.\n");
            return;
        }
    }

    printf("Enter Quantity: ");
    scanf("%d", &qty);
    printf("Enter Price per unit: ");
    scanf("%d", &prc);
    if (qty <= 0 || prc <= 0)
     {
        printf("\n Quantity and Price must be positive!\n");
        return;
    }
    productID[totalProducts] = id;
    quantity[totalProducts] = qty;
    price[totalProducts] = prc;
    totalProducts++;
    printf("\n✔ Product Added Successfully!\n");
}
void searchProduct() {
    int id;
    printf("\nEnter Product ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < totalProducts; i++) {
        if (productID[i] == id) {
            printf("\nProduct Found!\n");
            printf("ID: %d\n", productID[i]);
            printf("Quantity: %d\n", quantity[i]);
            printf("Price: %d\n", price[i]);
            return;
        }
    }
    printf("\n Product Not Found!\n");
}
void updateQuantity()
 {
    int id, choice, qty;

    printf("\nEnter Product ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < totalProducts; i++) 
    {
        if (productID[i] == id) {
            printf("\n1. Increase Stock\n2. Decrease Stock\nEnter choice: ");
            scanf("%d", &choice);
            printf("Enter quantity: ");
            scanf("%d", &qty);
            if (choice == 1) {
                quantity[i] += qty;
                printf("\n✔ Stock Increased Successfully!\n");
            } 
            else if (choice == 2) 
            {
                if (quantity[i] - qty < 0) 
                {
                    printf("\n Cannot reduce stock below 0!\n");
                } else {
                    quantity[i] -= qty;
                    printf("\n✔ Stock Decreased Successfully!\n");
                }
            } 
            else
             {
                printf("\n Invalid choice!\n");
            }
            return;
        }
    }
    printf("\n Product Not Found!\n");
}
void rackReport() 
{
    int rack[3][3];
    printf("\nEnter 3*3 Rack Stock Matrix:\n");
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &rack[i][j]);
        }
    }
    int max = rack[0][0], min = rack[0][0];
    int maxRow = 0, maxCol = 0, minRow = 0, minCol = 0;
    int total = 0;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            int val = rack[i][j];
            total += val;
            if (val > max) 
            {
                max = val;
                maxRow = i;
                maxCol = j;
            }
            if (val < min)
             {
                min = val;
                minRow = i;
                minCol = j;
            }
        }
    }
    printf("\n===== Rack Report =====\n");
    printf("Maximum Stock  : %d at position (%d, %d)\n", max, maxRow, maxCol);
    printf("Minimum Stock  : %d at position (%d, %d)\n", min, minRow, minCol);
    printf("Total Items in Racks: %d\n", total);
}
void stockValueReport() {
    if (totalProducts == 0)
     {
        printf("\nNo products available!\n");
        return;
    }
    int highestValue = -1, lowestValue = 1e9;
    int highID = -1, lowID = -1;
    int totalValue = 0;
    printf("\nID\tQty\tPrice\tStockValue\n");
    for (int i = 0; i < totalProducts; i++) {
        int stockVal = quantity[i] * price[i];
        totalValue += stockVal;
        printf("%d\t%d\t%d\t%d\n", productID[i], quantity[i], price[i], stockVal);
        if (stockVal > highestValue) {
            highestValue = stockVal;
            highID = productID[i];
        }
        if (stockVal < lowestValue) {
            lowestValue = stockVal;
            lowID = productID[i];
        }
    }
    printf("\nHighest Stock Value Product ID : %d (%d)\n", highID, highestValue);
    printf("Lowest Stock Value Product ID  : %d (%d)\n", lowID, lowestValue);
    printf("Total Warehouse Value          : %d\n", totalValue);
}
void displayAll()
 {
    if (totalProducts == 0) 
    {
        printf("\nNo products to display.\n");
        return;
    }
    printf("\nID\tQuantity\tPrice\n");
    for (int i = 0; i < totalProducts; i++) {
        printf("%d\t%d\t\t%d\n", productID[i], quantity[i], price[i]);
    }
}
int main() 
{
    int choice;
    while (1)
     {
        printf("\n==================== Warehouse Menu ====================\n");
        printf("1. Add Product\n");
        printf("2. Search Product\n");
        printf("3. Update Quantity\n");
        printf("4. Generate Rack Report\n");
        printf("5. Calculate Stock Values\n");
        printf("6. Display All Products\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1: addProduct(); break;
            case 2: searchProduct(); break;
            case 3: updateQuantity(); break;
            case 4: rackReport(); break;
            case 5: stockValueReport(); break;
            case 6: displayAll(); break;
            case 7:  printf("\nThank you! Exiting...\n");
         return 0;
            default:
                printf("\n Invalid Choice! Try again.\n");
        }
    }
    return 0;
}
