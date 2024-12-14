#include <stdio.h>

void func(int n){


    if(n != 1){
        func(n - 1);
    }

    if(n % 2 == 0){
        printf("%d\n", n);
    }
    
} 
int main(){ 
    
    int number;

    printf("Soni kiriting = ");
    scanf("%d", &number);

    func(number);
    
    printf("Juft sonlar qatori:");

    return 0;
}
