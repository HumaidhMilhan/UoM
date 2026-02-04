#include <stdio.h>

struct bill{
    char p_code[50];
    char p_name[50];
    char p_category[50];
    float p_price;
    int p_quantity;
};

int highValueItem(struct bill records[], int size){
    int count = 0;
    for (int i = 0; i < size; i++){
        float value = records[i].p_price * records[i].p_quantity;

        if (value > 100){
            count += 1;
        }
    }
    return count;
}

int main() {

    struct bill bills[3];
    float total = 0;

    for (int i = 0; i < 3; i++){
        printf("\n------Item %d------\n", i + 1);
        printf("Enter product code:");
        scanf("%s", bills[i].p_code);

        printf("Enter product name:");
        scanf(" %[^\n]", bills[i].p_name);

        printf("Enter product category:");
        scanf(" %[^\n]", bills[i].p_category);
        
        printf("Enter product price:");
        scanf("%f", &bills[i].p_price);

        printf("Enter prodct quantity:");
        scanf("%d", &bills[i].p_quantity);

        total += (bills[i].p_price * bills[i].p_quantity);
    }

    int highItemCount = highValueItem(bills, 3);

    printf("\n------Total Bill Summary------\n");
    printf("\n==============================\n");
    printf("P_code\tP_name\tPrice\tQty\tTotal\n");

    for (int i = 0; i < 3; i++){
        printf("\n%s\t%s\t%.2f\t%d\t%.2f\n", bills[i].p_code, bills[i].p_name, bills[i].p_price, bills[i].p_quantity, bills[i].p_price * bills[i].p_quantity);
        printf("\n--------------------------------\n");
    }

    printf("\n==============================\n");
    printf("Grand Total: %.2f\n", total);
    printf("Items with total value over 100 : %d", highItemCount);
    printf("\n------------------------------\n");
    
    return 0;
}