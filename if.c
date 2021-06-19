#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // true if number is greater than 100
    if (number > 100) {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

    return 0;
}
