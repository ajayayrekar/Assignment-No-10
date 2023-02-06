#include<stdio.h>

double simpleInterest(double p, double r, int t) {
    return (p * r * t) / 100;
}

int main() {
    double principle, rate;
    int time;
    printf("Enter principle amount: ");
    scanf("%lf", &principle);
    printf("Enter rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter time period: ");
    scanf("%d", &time);
    printf("Simple Interest: %lf", simpleInterest(principle, rate, time));
    return 0;
}
