// EB 6th Updated Financial Calculator

#include <stdio.h>

double get_input(const char prompt[]) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

double calculate_percent(double income, double expense) {
    return (expense / income) * 100.0;
}

int main() {
    double income, rent, utilities, groceries, transportation;
    double rent_percent, utilities_percent, groceries_percent, transportation_percent;
    double savings, savings_percent, leftover;

    income = get_input("What is your monthly income: ");
    rent = get_input("What is your monthly rent/mortgage: ");
    utilities = get_input("What is your monthly utilities: ");
    groceries = get_input("What is your monthly groceries: ");
    transportation = get_input("What is your monthly transportation: ");

    rent_percent = calculate_percent(income, rent);
    utilities_percent = calculate_percent(income, utilities);
    groceries_percent = calculate_percent(income, groceries);
    transportation_percent = calculate_percent(income, transportation);

    savings = income * 0.10;
    savings_percent = calculate_percent(income, savings);
    leftover = income - (rent + utilities + groceries + transportation + savings);

    printf("\nYour rent is $%.2f and that is %.0f%% of your income.\n", rent, rent_percent);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, utilities_percent);
    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, groceries_percent);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", transportation, transportation_percent);

    printf("\nYou should save $%.2f a month, that is %.0f%% of your income.\n", savings, savings_percent);
    printf("You have $%.2f of spending money each month!\n", leftover);

    return 0;
}