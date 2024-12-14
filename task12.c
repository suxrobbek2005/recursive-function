#include<stdio.h>

// fibonacini birinchi va ikkinchi sonlari aniq shu sababdan uzgaruvchilarga taminlab oldik;
int fibonanc1 = 0, fibonanc2 = 1; 
int fibonanc = 0;

int fibonanci_function(int number){ 
    // fibonacini hisoblab olish shartini berdik;
    if(number >= 2){
        fibonanc = fibonanc1 + fibonanc2;
        fibonanc1 = fibonanc2;
        fibonanc2 = fibonanc;
        fibonanci_function(number - 1);
    } else {
        return fibonanc;
    }
    
}

int main(){
    int number;
    printf("fibonacini nechinchi soni kerak !");
    printf("Fibonacini kiriting = ");
    scanf("%d", &number);
    printf("Natija: %d", fibonanci_function(number));
}