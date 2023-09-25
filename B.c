#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000010];
    gets(s1);
    int i;
    for (i=0; s1[i] != '\\'; i++){
        printf("%c", s1[i]);
    }


    return 0;
}
