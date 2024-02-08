#include<stdio.h>
int main() {
    //credit score = cs,  current balance = cb;
    float cs,cb,i;
    printf("Enter the credit score : ");
    scanf("%f", &cs);
    printf("Enter the current balance : ");
    scanf("%f", &cb) ;
    if(cs<600){
        i=(float)15/100*cb;
       
    }
    else if(cs>600&&cs<750){
        i=(float)12/100*cb;
        
    }
    else if(cs>750){
        i=(float)10/100*cb;
       
    }
     printf("The calculated interest = %.2f", i);



    
    return 0;
}