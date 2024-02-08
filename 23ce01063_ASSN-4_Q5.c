#include<stdio.h>
#include<math.h>
int main() {
    int num,ud,td,hd;
   printf("Enter the value of the number :");
   scanf("%d", &num);
   if(num>=100&&num<=999){
    ud=num%10;
   td=((num%100)-ud)/10;
   hd=num/100;
    int ang=pow(ud,3)+pow(td,3)+pow(hd,3);
   printf("%d\n", ang);
    if(ang==num){
        printf("Yes ");
    }
        else{
            printf("NO");
        }

   
    
    
   }
   else{
        printf("Incorrect input");
    }
    return 0;
}