#include <stdio.h>
#include <string.h>


int revorse = 0;

void revorse_function(char text[]){

    int length = strlen(text);

    if (revorse - length == 0) return;
    {
        putchar(text[length - revorse - 1]);
    } 
    revorse++;
    revorse_function(text);
}

int main(){

    revorse_function("Najottalim");
   
    return 0; 
}