#include <stdio.h>

int isEven(int number) {
    if (number % 2 == 0) {
        return 1; // Number even
    } else {
        return 0; // Number odd
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}