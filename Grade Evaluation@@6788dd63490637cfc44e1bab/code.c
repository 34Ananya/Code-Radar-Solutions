#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    switch(c){
        case 'A':
        printf("Excellent");
        case 'B':
        printf("Good");
        case 'C':
        printf("Average");
        case 'D':
        printf("Below Average");
        case 'E':
        printf("Fail");
        default:
        printf("Invalid grade");
    }
    return 0;
}