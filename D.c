#include <stdio.h>

int main() {
    char s1[30], s2[30];
    scanf("%s %s", s1, s2);
    for(int i =0; i<30; i++){
        if(s1[i]>s2[i]){
            printf("%s", s2);
            break;
        }else if(s1[i]<s2[i]){
            printf("%s", s1);
            break;
        }
    }


    return 0;
}
