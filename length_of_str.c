#include <stdio.h>
// #include <string.h>

int main(){
    char ch[101];
    fgets(ch,100,stdin);
  
    int count = 0;//strlen(ch);
  
    for(int i = 0; ch[i] != '\0' ; i++){
        count++;
    }
    printf("%d",count);
    return 0;
}
