#include<stdio.h>

int main() {
    int x,y,product;
    printf("Enter X : ");
    scanf("%d", &x);
    printf("Enter Y : ");
    scanf("%d", &y);

    product = x*y;
    printf("Sum of X & Y: %d", product);

    return 0;
}