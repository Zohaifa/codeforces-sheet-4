#include <stdio.h>
#include <string.h>

int main() {
    char s1[2010], s2[1010], s3[2010];
    int a, b, i, j;

    scanf("%s %s", s1, s2);
    a = strlen(s1);
    b = strlen(s2);
    s1[a]= ' ';
    for(i=(a+1), j=0; j<b; i++, j++){
      s1[i] = s2[j];
    }
    s1[a+b+1] = '\0';
    printf("%d %d\n%s", a, b, s1);


    return 0;
}
