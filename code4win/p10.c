#include <stdio.h>

int main() {
    int days;
    
    printf("Enter the days: ");
    scanf("%d", &days);

    // Calculattions
    int years = (days / 365); 
    int weeks = (days % 365) / 7;
    int rem_days = days - ((years * 365) + (weeks * 7));


    // results
    printf("The Years are %d\n", years);
    printf("The Weeks are %d\n", weeks);
    printf("The Days are %d\n", rem_days);

    return 0;
}
