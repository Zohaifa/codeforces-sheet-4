#include <stdio.h>
#include <string.h>



int main() {
    char s1[1000010];
    gets(s1);
    int n = strlen(s1);
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += s1[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}
