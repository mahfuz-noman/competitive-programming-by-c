#include <stdio.h>
#include <math.h>
int main(){
    long long int a , s;
    scanf("%lld", &a);
    for (int i = 1 ; ; i++){
        s = pow(2,i);
        if(s == a){
            printf("YES");
            break;
        }else if(s > a){
            printf("NO");
            break;
        }
    }
    
    return 0;
}