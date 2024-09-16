#include <stdio.h>

int main() {
    float tax, income, salary_after_tax;

    printf("Enter income");
    scanf("%f", &income);

    if (income <= 250000) {
        printf("No tax");
    } else if (income >= 250001 && income <= 500000) {
        tax = income * 5 / 100;
        salary_after_tax = income - tax;
        printf("Salary after tax is %.2f.\n", salary_after_tax);
    } else if (income >= 500001 && income <= 1000000) {
        tax = income * 20 / 100;
        salary_after_tax = income - tax;
        printf("Salary after tax is %.2f.\n", salary_after_tax);
    } else if (income > 1000000) {
        tax = income * 30 / 100;
        salary_after_tax = income - tax;
        printf("Salary after tax is %.2f.\n", salary_after_tax);
    }

    printf("income%f, tax %f, salary_after_tax %f/n", income, tax, salary_after_tax);

    return 0;
}