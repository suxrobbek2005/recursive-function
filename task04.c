#include <stdio.h>

void func(int n){


    if(n % 2 == 1){
        printf("%d\n", n);
    }

    if(n != 1){
        func(n - 1);
    }
}
int main(){ 
    
    int number;

    printf("Soni kiriting = ");
    scanf("%d", &number);

    func(number);
    puts("Toq sonlar qatori:");

    return 0;
}
