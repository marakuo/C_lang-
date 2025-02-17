#include <stdio.h>
#include <math.h>

int main() {
    int base, power;
   
    
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf(" %d", &power);



    long long ans = pow(base, power);
    
    printf("%d raised to the power of %d is %lld\n", base, power, ans);

    return 0;
}
