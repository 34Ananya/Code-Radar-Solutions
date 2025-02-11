#include<stdio.h>
int main(){
    int a,i,j=1;
    scanf("%d",&a);
    if(a<2){
        printf("Not Prime");
    }
    i=2;
    while(i<a){
        if(a%i==0){
            j=0
            printf("Not Prime");
            break;
        }
    }
    if (j==1){
        printf("Prime");
    }
    return 0;
}