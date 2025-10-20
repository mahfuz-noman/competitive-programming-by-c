#include <stdio.h>
#include <string.h>

int main(){
    char ch[1001],tmp[1001];
    scanf("%s", &ch);

    int size = strlen(ch);
    for(int i = size-1 , j = 0 ; j < size ; i-- , j++){
        tmp[j] = ch[i];
    }
    tmp[size]='\0';
    if(strcmp(tmp,ch) == 0){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}
