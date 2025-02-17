#include <stdio.h>
int main() {
    
    float length;
    
     printf("Enter the length in cm : ");
     scanf("%f", &length);
     printf("The Length in meters is %f\n", length/100);
     printf("The Length in kilometers is %f\n", length/100000);
     
   
    
    
    return 0;
}
