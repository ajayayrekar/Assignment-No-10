#include <stdio.h>

int contains_digit(int num, int digit) {
    while (num > 0) {
        if (num % 10 == digit) {
            return 1;
        }
        num /= 10;
    }
    return 0;
}

int main() {
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit to check: ");
    scanf("%d", &digit);
    if (contains_digit(num, digit)) {
        printf("%d contains %d\n", num, digit);
    } else {
        printf("%d does not contain %d\n", num, digit);
    }
    return 0;
}
