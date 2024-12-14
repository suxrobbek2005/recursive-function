#include<stdio.h>

int incrase = 1;
void incrase_function(int number){
    // Soni kupaytirib chiqaruvchi shart;
    printf(" %d x %d = %d\n", number, incrase, number * incrase);
    if(incrase == 10){
        incrase++;
        incrase_function(number);
    }
    incrase++;
}
int main(){
    int n;
    printf("Sizga qaysi sonlarning kupaytirilgan jadval kerak = "); 
    scanf("%d", &n);

    incrase_function(n);

    return 0;
}