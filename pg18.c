/*Implement C program to calculate profit or loss.*/

#include <stdio.h>
int main() {
    float cost_price, selling_price, profit, loss;
    printf("Enter the Cost Price: ");
    scanf("%f", &cost_price);
    printf("Enter the Selling Price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        printf("Profit: %.2f\n", profit);
    } else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        printf("Loss: %.2f\n", loss);
    } else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
