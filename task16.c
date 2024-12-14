#include <stdio.h>


int total_number(int number){
     
        if (number == 0) return 0;
        int count = number % 10;
        return count + total_number(number / 10);
}
int main(){

    int number = total_number(4587);
     
    printf("%d", number);

    return 0;
}