#include <stdio.h>

int main(){
    int tc;
    scanf("%u", &tc);
    while(tc--){
        unsigned int a,tmp=0;
        scanf("%u", &a);
        if(a == 1){
            printf("1 1\n");
        }else if(a == 2){
            printf("1 2\n");
        }
        else{
            unsigned int n = 1 ,m = 1 , g1, g2;
            while (1){
                g1 = n*n;
                g2 = m*m;
                if(g1 >= a)break;
                m = n;
                n++;
            }
            tmp = g1-n;
            if(tmp < a){
                printf("%d %d\n",n,(g1+1)-a);
            }else{
                printf("%d %d\n",a-g2,n);
            }
        }
    }
    return 0;
}
