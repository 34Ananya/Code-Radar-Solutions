#include <stdio.h>

int main() {
    int a;
    scanf("%d");
    if(!(a%5==0|||a%11==0)){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}