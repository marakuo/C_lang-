#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;
    printf("Enter the grade of the 5 subjects: ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4,&s5);
    float total = s1+ s2+ s3+ s4+ s5 ;
    float avg = (s1+ s2+ s3+ s4+ s5)/5;
    float percentage = (total / 500.0) * 100;
    
    printf("The Total is %f\n", total);
    printf("The Average is %f\n", avg);
    printf("The percentage is %f\n", percentage);

    return 0;
}
