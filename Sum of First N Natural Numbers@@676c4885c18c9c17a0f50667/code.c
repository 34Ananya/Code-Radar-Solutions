#include<stdio.h>
int main(){
    int a,i,j=0;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=j+i;
        i++;
    }
    printf("%d",j);
    reurn 0;
}