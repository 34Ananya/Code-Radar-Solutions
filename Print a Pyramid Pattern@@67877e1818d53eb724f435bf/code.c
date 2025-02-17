#include<stdio.h>
int main(){
    int a,i,j,k=1,l;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=i;
        while(j<a){
            printf(" ");
            j++;
        }
        l=1;
        while(l<=(2*k)+1){
            printf("*");
            l++;
        }
        k++;
        i++;
    }
    return 0;
}