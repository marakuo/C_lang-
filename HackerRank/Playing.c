#include <stdio.h>
int main() {
    //variables
    char ch;
    char word[100];
    char sent[100];

    //taking input

    scanf("%c", &ch);
    scanf("%s", word); 
    scanf(" %[^\n]", sent);
//print the output

    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s", sent);
    
   
    
    return 0;
}
