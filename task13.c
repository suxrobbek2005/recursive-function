#include <stdio.h>
 
int factorial_function(int number){
    
    if (number == 1){
        return 1;
    }
    
    // Kiritilgan soni kamayib borish tartibida kupaytirdik;
    return number * factorial_function(number - 1);
}

int main(){

    int number;

    printf("Qaysi soni faktorialini bilishni hoxlaysiz = ");
    scanf("%d", &number);

    printf("Natija = %d", factorial_function(number));

    return 0;
}