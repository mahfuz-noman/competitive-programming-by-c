#include <stdio.h>

int main(){
    char ch[1000001];
    fgets(ch,1000001,stdin);
    for(int i = 0 ; ch[i] != '\\' ; i++){
        printf("%c",ch[i]);
    }
    return 0;
}
