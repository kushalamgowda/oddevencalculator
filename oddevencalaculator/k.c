#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    printf("The number is %d\n\n",x);
    
    // ternary
    printf("ternary version to find Even or Odd\nThe answer is %s\n\n",(x%2 == 0) ? "Even": "Odd");
    
    printf("if-else version to find Even or Odd\n");
    if (x%2 == 0){
        printf("The answer is Even\n"); }
        else {
        printf("The answer is Odd\n");
    }
    printf("\nswitch-case version to find Even or Odd\n");
    switch (x % 2) { 
        case 0:
           printf("The answer is Even\n");
           break;
        case 1:
           printf("The answer is Odd\n");
           break;
        default: 
           printf("Error\n"); 
           break; 
    }

    return 0;
}