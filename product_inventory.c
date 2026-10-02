#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product product;
    FILE *file;

    printf("===== Product Inventory Using File Handling =====\n");

    file = fopen("products.txt", "a");

    if (file == NULL)
    {
        printf("Unable to open file!\n");
        return 1;
    }

    printf("Enter Product ID: ");
    scanf("%d", &product.id);

    printf("Enter Product Name: ");
    scanf(" %49[^\n]", product.name);

    printf("Enter Quantity: ");
    scanf("%d", &product.quantity);

    printf("Enter Price: ");
    scanf("%f", &product.price);

    fprintf(file, "Product ID: %d\n", product.id);
    fprintf(file, "Name: %s\n", product.name);
    fprintf(file, "Quantity: %d\n", product.quantity);
    fprintf(file, "Price: %.2f\n", product.price);
    fprintf(file, "-------------------------\n");

    fclose(file);

    printf("\nProduct record saved successfully!\n");
    printf("Data is stored in products.txt\n");

    return 0;
}
