#include <stdio.h>
#include <string.h>

int main(){
    int alpha[26] = {0}, i;
    char c;
    while(1){
        scanf("%c", &c);
        if(c != '\n')
        alpha[c-'a']++;
        else
        break;
    }
    for(i=0; i<26; i++){
        if(alpha[i] != 0){
            printf("%c : %d\n", 'a'+i, alpha[i]);
        }
    }
    return 0;
}
