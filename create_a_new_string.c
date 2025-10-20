#include <stdio.h>

int main(){
    int n = 0;
    char ch[1001];
    char ch2[1001];
    
    scanf("%s",&ch);
    scanf("%s",&ch2);
   
    for(int i = 0 ; ch[i]!='\0';i++){
    n++;
    }printf("%d ", n);
    n = 0 ;
    for(int i = 0 ; ch2[i]!='\0';i++){
    n++;
    }printf("%d\n", n);
    
    printf("%s ", ch);
    printf("%s", ch2);
    
   return 0;
}
