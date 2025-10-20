#include <stdio.h>

int main(){
    int n ;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(int i = 0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = n-1,j =0;i >= 0; i--,j++){
        arr2[j]=arr[i];
    }
    int tmp = 0;
    for (int i = 0;i<n;i++){
    	if(arr[i]==arr2[i]){
        	tmp++;
        }
    }
    if(n==tmp){
    printf("YES");
    }else{
    printf("NO");
    }
   return 0;
}
