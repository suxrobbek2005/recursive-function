#include <stdio.h>

int square_function(int num1, int num2){

    // bir soning kirirtilgan soning darajasini hisoblovchi function;
    if(num2 == 1) return 1;
    {
        return num1 * square_function(num1, num2 - 1);
    }    
}

int main(){

    int num1, num2;
    
    // Dasturimizga birinchi argumentni taminlaymiz;
    printf("Qaysi soning kvatrati kerak = ");
    scanf("%d", &num1);
    
    // Dasturimizga ikkinchi argumentni taminlaymiz;
    printf("Kiritgan soningizni nechanchi darajasi kerak = ");
    scanf("%d", &num2);

    printf("Natija = %d", square_function(num1, num2));

    return 0;    
}