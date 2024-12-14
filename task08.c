#include <stdio.h>

void one_function(int num1){
    
    // Dasturdan chiqadigan matni kiritib olamiz;
    printf("Hello code:\n");

    if (num1 != 1){
        one_function(num1 - 1);
    }
}

int main(){

    int num1;
    
    //Dasturimizdagi uzgaruvchilarga qiymat taminlaymiz;
    
    printf("Kiritilgan matni necha marta chiqarishni hoxlaysiz = ");
    scanf("%d", &num1);

    // Dasturimizdagi funksiyani coll qilib oldik;
    one_function(num1);
}