#include<stdio.h>
int main() {
    int num1,num2,num3,max;
    printf("Enter the value of the 1st number :");
    scanf("%d", &num1);
    printf("Enter the value of the 2nd number :");
    scanf("%d", &num2);
    printf("Enter the value of the 3rd number :");
    scanf("%d", &num3);
    int p=(num1>num2&&num1>num3);
    int q=(num2>num1&&num2>num3);
    int r=(num3>num2&&num3>num1);
    
    
     switch(p){
        case 1: printf("The maximum number is %d", num1);
        break;
        case 0 :
         switch(q){
        case 1 : printf("The maximum number is %d", num2);
        break;
        case 0 : printf("The maximum number is : %d", num3);
        break;
        }
        
        
     }
    
     

    

return 0;
}