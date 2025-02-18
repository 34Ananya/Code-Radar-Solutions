#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    i=1;
    while(i<=10){
        printf("%d x %d = %d",a,i,a*i);
        i++;
    }
    return 0;
}