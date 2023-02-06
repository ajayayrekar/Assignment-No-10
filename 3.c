#include<stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d", isEven(num) ? 1 : 0);
    return 0;
}
