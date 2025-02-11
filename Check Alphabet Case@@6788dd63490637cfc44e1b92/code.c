#include <stdio.h>

int main() {char c;
    scanf("%c",&c);
    if(c>=60&&c<=90){
        printf("Uppercase");
    }
    else if(c>='a'&&c<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}