#include<stdio.h>
int main() {
    int n;
    printf("Enter the value of the number : ");
    scanf("%d", &n);
    switch(n%2){
        case 0 : printf("The given number is even ");
         break;


         default : printf("The given number is odd ");
         break;
    }
    return 0;
}