#include <stdio.h>

void two_function(int num1, int num2){
    
    // kiritilgan birinchi sondan ikkinchi son kichik bulib qolganda o'sib borich tartibini shartini quyamiz;
    printf("%d ", num1 - 1, num2);

    if(num1 > num2){
        two_function(num1 - 1, num2);
    } 
    // kiritilgan ikkinchi son katta bulib qaolganda kamayish tartibida chiqarish shartini quyamiz;

    else if (num2 > num1){
        two_function(num1 + 1, num2);
    }
}

int main(){

    int num1, num2;
    
    // dastururimizga arguminitni taminlab olamiz birinchisini;
    printf("Birinchi raqamni kiritishingiz mumkin = ");
    scanf("%d", &num1);

    //Dasturimizga ikkinchi argumintni taminlab olamiz;
    printf("Ikkinchi raqamni kiritishingiz mumkin = ");
    scanf("%d", &num2);

    two_function(num1, num2);

    return 0;
}
    