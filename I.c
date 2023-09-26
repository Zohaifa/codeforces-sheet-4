#include <stdio.h>
#include <string.h>



int main() {
    char s[1010];
    scanf("%s", s);
    int n = strlen(s), pal = 1;
    for (int i=0; i<(n+1)/2; i++){
        if( s[i] != s[n-1-i]){
            pal = 0;
            break;
        }
    }
    if(pal==1) {printf("YES\n");}
    else {printf("NO\n");}


    return 0;
}

