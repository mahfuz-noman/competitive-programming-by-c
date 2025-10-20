#include <stdio.h>

void sort(int t1[],int n);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr,n-1);
    return 0;
}

void sort(int t1[],int n){
    int temp = 0;
    for (int i = 0 ; i < n-1 ; i++){
        for (int j = 0 ; j < n-i-1 ; j++){
            if (t1[j] > t1[j+1]){
                temp = t1[j] ;
                t1[j] = t1[j+1];
                t1[j+1] = temp;
                break;   
            }
        }
    }
    for (int i = 0 ; i < n ; i++){
        printf("%d \t",t1[i]);
    }
}
