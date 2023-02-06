#include<stdio.h>

void printOddNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
}

int main() {
    int num;
    printf("Enter the value of N: ");
    scanf("%d", &num);
    printf("The first %d odd natural numbers are: ", num);
    printOddNumbers(num);
    return 0;
}
