#include <stdio.h>
#include <string.h>

int main()
{   char s[100000];
    gets(s);
    int n = strlen(s), i;
    for(i=0; i<n; i++)
    {
        if(s[i]==','){
            printf(" ");
        }
        else if(s[i]>='a' && s[i]<='z'){
                s[i] = s[i] - 'a' + 'A';
                printf("%c", s[i]);
        }
        else{
            s[i] = s[i] + 'a' - 'A';
                printf("%c", s[i]);
        }
    }

    return 0;
}

