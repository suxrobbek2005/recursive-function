#include <stdio.h>

int great_divisor(int number1, int number2){
   
   // Dasturimiz cheksiz ishlaab kitmasligi uchun shart quyildi
    if (number1 == number2) return number1;
    
    // Sonlarning ekubi topildi;
    if(number1 > number2){
        number1 = number1 - number2;
    } else {
        number2 = number2 - number1;
    }

    return great_divisor(number1, number2);
}

// Kiritlgan sonlarning ekukini topish sarti quyildi;
int in_general(int numbers1, int numbers2){

    return numbers1 * numbers2 / great_divisor(numbers1, numbers2);
}

int main(){

    int number1, number2;

    printf("Birinchi soni kiriting = ");
    scanf("%d", &number1);

    printf("Ikkinchi soni kiritnig = ");
    scanf("%d", &number2);
    
    printf("Kiritlgan sonlarning ekuki = ");
    printf("%d",  in_general(number1, number2));

    return 0;
}