#include <stdio.h>
#include <string.h>



int main() {
    int t;
    scanf("%d\n", &t);
    for(int k=0; k<t; k++){
        char s[100];
        gets(s);
        int a = strlen(s);
        if(a>10){
            printf("%c%d%c\n", s[0], a-2, s[a-1]);
        }
        else{
            printf("%s\n", s);
        }
    }
    return 0;
}

