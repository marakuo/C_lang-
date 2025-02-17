#include <stdio.h>
#include <math.h>

int main() {
    int num;
   
    
    printf("Enter the Number: ");
    scanf("%d", &num);
    int root = sqrt(num);
    
    printf("The Square root of %d is %d\n", num, root);

    return 0;
}
