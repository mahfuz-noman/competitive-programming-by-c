#include <stdio.h>
#include <string.h>

int main(){
    char ch[100001];
    scanf("%s", &ch);
    int size = strlen(ch);
    for(int i = 0 ; i < size ; i++){
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            printf("%c",ch[i]-32);
        }
        else if(ch[i] >= 'A' && ch[i] <= 'Z'){
            printf("%c",ch[i]+32);
        }
        else if(ch[i] == ','){
            printf(" ");
        }
    }
    return 0;
}
