#include <stdio.h>

void print_prime_factors(int num) {
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors of %d: ", num);
    print_prime_factors(num);
    printf("\n");
    return 0;
}
