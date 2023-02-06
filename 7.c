#include <stdio.h>
#include <math.h>

long long int factorial(int n) {
    long long int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter the value of n and r: ");
    scanf("%d%d", &n, &r);
    printf("C(%d,%d) = %lld\n", n, r, combination(n, r));
    return 0;
}
