#include<stdio.h>

void func(int n){
    //Kiritlgan songacha barcha butun qiymatlarni chiqaruvchi function
    if(n != 0){
        func(n-1);
        printf("%d ", n);
    }
}

int main(){
    int n;
    printf("sonni kiriting: "); scanf("%d", &n);

    func(n);
}