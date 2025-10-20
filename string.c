#include <stdio.h>
#include <string.h>

int main(){
    int a,b;
    char ch1[11];
    char ch2[11];
    scanf("%s",&ch1);
    scanf("%s",&ch2);
    a = strlen(ch1);
    b = strlen(ch2);
    printf("%d %d\n",a,b);

    printf("%s%s\n",ch1,ch2);

    printf("%c",ch2[0]);
    for(int i = 1 ; i < a ; i++){
        printf("%c",ch1[i]);
    }printf(" %c",ch1[0]);
    for(int i = 1 ; i < b ; i++){
        printf("%c",ch2[i]);
    }printf("\n");
    return 0;
}
