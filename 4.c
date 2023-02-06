#include<stdio.h>

void printNaturalNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

int main() {
    int num;
    printf("Enter the value of N: ");
    scanf("%d", &num);
    printf("The first %d natural numbers are: ", num);
    printNaturalNumbers(num);
    return 0;
}
