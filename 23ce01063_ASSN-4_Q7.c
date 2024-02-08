#include<stdio.h>
#include<math.h>
int main() {
    int age;
    printf("Enter the age of the person : ");
    scanf("%d", &age);

     int p= (age<5);
     int q= (age>=5&&age<=12);
     int r =(age>=13&&age<=59);
     int s=(age>=60);
     switch(p){
        case 1 : printf("The ticket price is 0/-");
        break;
           case 0: switch(q){
            case 1: printf("The ticket price is 20/-");
            break;
            case 0 : switch(r){
                 case 1: printf("The price of the ticket is 50/-");
                 break;
                 case 0: switch(s){
                    
                     float price = 50-((float)20/100*50);
            printf("The Price of the ticket is : %.0f ", price);
                 }
                
            }
}
     }
  return 0;
}
