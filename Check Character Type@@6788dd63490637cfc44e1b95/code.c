#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%d",&c);
    if(isdigit(c)){
        printf("Digit");
    }
    else if(isalpha(c)){
        printf("Consonant");
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel");
    }
    else{
        printf("Special Character");
    }
    return 0;
}