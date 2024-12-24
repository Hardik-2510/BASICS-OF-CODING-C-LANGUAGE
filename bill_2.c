#include <stdio.h>

// Structure to store product details
typedef struct
{
    char name[50];
    float price;
    int quantity;
} Product;

// Function to calculate the total amount payable
float calculateTotalAmount(Product products[], int numProducts)
{
    float totalAmount = 0.0;

    for (int i = 0; i < numProducts; i++)
    {
        totalAmount += products[i].price * products[i].quantity;
    }

    return totalAmount;
}

int main()
{
    int numProducts;

    printf("Enter the number of products: ");
    scanf("%d", &numProducts);

    Product products[numProducts];

    // Input product details
    for (int i = 0; i < numProducts; i++)
    {
        printf("\nProduct %d:\n", i + 1);

        printf("Enter the name: ");
        scanf("%s", products[i].name);

        printf("Enter the price: ");
        scanf("%f", &products[i].price);

        printf("Enter the quantity: ");
        scanf("%d", &products[i].quantity);
    }

    // Calculate total amount payable
    float totalAmount = calculateTotalAmount(products, numProducts);

    // Print the invoice
    printf("\n\n************ Invoice ************\n");
    printf("Product Details:\n");

    for (int i = 0; i < numProducts; i++)
    {
        printf("Product %d: %s\n", i + 1, products[i].name);
        printf("Price per item: %.2f\n", products[i].price);
        printf("Quantity: %d\n", products[i].quantity);
        printf("\n");
    }

    printf("Total amount payable: %.2f\n", totalAmount);
    printf("*********************************\n");

    return 0;
}
