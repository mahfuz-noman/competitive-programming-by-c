#include <stdio.h>

int main(){
    int n,m;
    scanf("%d", &n);
    char ch1[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &ch1[i]);
    }
    scanf("%d",&m);
    char ch2[m];
    for(int i = 0 ; i < m ; i++){
        scanf("%d", &ch2[i]);
    }
    char c[n+m];
    for(int i = 0 ; i < n ; i++){
        c[i] = ch1[i];
    }
    for(int i = 0 ; i < m ; i++){
        c[i+n] = ch2[i];
    }
    for(int i = 0 ; i < n+m ; i++){
        printf("%d ",c[i]);
    }
    return 0;
}
