#include<stdio.h>
int main(){
    int a,i,j=1;
    scanf("%d",&a);
    i=2;
    while(i<a){
        if(a%i==0){
            printf("Not Prime");
            j++;
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