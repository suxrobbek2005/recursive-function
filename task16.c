#include <stdio.h>

int count = 0;
void total_number(int number){
     
    if (number > 0){
          number % 10;
          number / 10;
          count++;
          printf("%d", count);
    }
}
int main(){

    int number;

    puts("soni kiritng ");
    scanf("%d", &number);

    total_number(number);
}