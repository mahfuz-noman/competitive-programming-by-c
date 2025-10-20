#include <stdio.h>

void dictobin(int u);

int main(){
    int n;
    scanf("%d",&n);
    dictobin(n);
    return 0 ;
}

void dictobin(int u){
    int t1 = 0 ,t2 = 0;
    int ch[51];
    for (int i = 50 ; i > 0 ; i--){
        t1 = u%2;
        u /= 2;
        ch[i] = t1;
        t2 = i;
        if (u == 0){
            break;
        }
    }
    int jo=0;
    for (int j = t2 ; j <= 50 ; j++){
        jo = ch[j];
        printf("%d",jo);
    }   

}
