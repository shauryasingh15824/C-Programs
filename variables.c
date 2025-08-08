#include <stdio.h>
   
// practice for format specifier %d 
   /* int main(){
        int age =23;
        printf("%d", age);
        return 0;
    }  */ 

// practice for format specifier %d 


  /*  int main(){
        char name[] ="Arsh";
        printf("%s", name); //Arsh
        return 0;
    } */    
    
// sizeof
    /* int main(){
       int age;
       float myNum;
       printf("%zu\n", sizeof(myNum));
          
          
    }  */

     /*   int main(){
        int number =123456789123455678956789;
        printf("%d", number);
        return 0;
         }*/ 

       /* int main(){
            int number =12345;
            double watermark;
            printf("%d\n", number);
            printf("%zu", sizeof(watermark));
            return 0;
        } */

          /*   int main(){
            int item =60;
            float cost_of_per_item = 9.85;
            float total_cost = item*cost_of_per_item;
            char currency = '$';         
            printf("item: %d\n",item);
            printf("cost_of_per_item: %c%.2f\n", currency, cost_of_per_item);  
            printf("total_cost: %c%.2f", currency, total_cost);
            return 0;
        } */







        int main(){
            int total_item =50;
            float per_item_cost =53.2;
            float total_cost =total_item*per_item_cost;
            char dollar ='$';
            printf("total_item: %d\n", total_item);
            printf("per_item_cost: %c%.2f\n", per_item_cost, dollar);
            printf("total_cost: %c%.2f",total_cost);
            return 0;
        }