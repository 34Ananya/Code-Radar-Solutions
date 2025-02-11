#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    i=2;
    while(i<a){
        if(a%i==0){
            printf("Not Prime");
            break;
        }
        else{
            j=0;
        }
        i++;
    }
    if (j==0){
        printf("Prime");
    }
    return 0;
}