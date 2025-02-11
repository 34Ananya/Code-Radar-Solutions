#include<stdio.h>
int main(){
    int a,i,j,jet;
    scanf("%d",&a);
    i=2;
    while(i<a){
        j=a%i;
        if(j==0){
            goto jet;
        }
        i++;
    }
    jet:
    printf("Not Prime");
    if (j==0){
        printf("Prime");
    }
    return 0;
}