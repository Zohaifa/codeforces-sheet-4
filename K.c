#include <stdio.h>
#include <string.h>

int main(){
    int i, j, k, n, f1, f2;
    char s1[100], s2[100], s3[110];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf(" %s %s", s1, s2);
        k=0;
        f1=0;
        f2=0;
        for(j=0; ; j++){
            if(s1[j] != '\0'){
                s3[k] = s1[j];
                k++;
            }
            else{
                f1 = 1;
                break;
            }
            if(s2[j] != '\0'){
                s3[k] = s2[j];
                k++;
            }
            else{
                f2 = 1;
                break;
            }
        }
        if(f1 == 0){
            do{
                j++;
                s3[k] = s1[j];
                k++;
            }while(s1[j] != '\0');

            }
        else{
            while(s2[j] != '\0'){
                s3[k] = s2[j];
                j++;
                k++;
            }
        }
        s3[k] = '\0';
        printf("%s\n", s3);

    }
    return 0;
}
