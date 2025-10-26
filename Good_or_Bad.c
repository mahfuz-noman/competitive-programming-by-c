#include <stdio.h>
#include <string.h>

int main(){
    int tc,size_ch,flag;
    scanf("%d", &tc);
    while (tc--){
        char ch[100001];
        scanf("%s",ch);
        size_ch = strlen(ch);
        flag = 0 ; 
        for(int i = 0 ; i < size_ch ; i++){
            if(ch[i] == '0' && ch[i+1] == '1' && ch[i+2] == '0'){
                printf("Good\n");
                flag++;
                break;
            }
            else if(ch[i] == '1' && ch[i+1] == '0' && ch[i+2] == '1'){
                printf("Good\n");
                flag++;
                break;
            }
        }if(flag == 0){
            printf("Bad\n");
        }
    }
    return 0;
}
