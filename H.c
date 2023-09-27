#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    int t;
    scanf("%d\n", &t);
    for(int k=0; k<t; k++){
        char s[100010];
        gets(s);
        int good = 0, length = strlen(s);
        for(int i = 2; i<length; i++){
            if((s[i-2]== '1' && s[i-1] == '0' && s[i]=='1')||(s[i-2]== '0' && s[i-1] == '1' && s[i]=='0')){
                good = 1;
                break;
            }
        }
        if(good == 1)
            printf("Good\n");
        else
            printf("Bad\n");
    }
    return 0;
}

