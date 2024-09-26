#include <stdio.h>

int multiply(int a, int b) {     //define the function 
    return a * b;
}

int main() {
    int result = multiply(5, 3);  // that function which we define early it will call 
    printf("The result is %d\n", result);
    return 0;
}