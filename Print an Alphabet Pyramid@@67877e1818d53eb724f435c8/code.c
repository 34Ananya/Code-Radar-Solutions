#include<stdio.h>
int main(){
    int a,i,j;
    char k='A';
    scanf("%d",a);
    i=1;
    while(i<=a){
        j=1;
        while(j<=i){
            printf("%c ",k);
            k++;
            j++;
        }
        k='A';
        printf("\n");
        i++;
    }
    return 0;
}