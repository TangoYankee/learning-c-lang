#include <stdio.h>

int mult (int x, int y) {
    return x * y;
};

int main() {
    int x;
    int y;

    printf("Please input two numbers to be multiplied");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("The product of the two numbers is %d\n", mult(x, y));
    return 0;
}
