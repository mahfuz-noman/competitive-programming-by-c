#include <stdio.h>

int bintodes(int p);
int power(int num,int power);

int main() {
    int k ;
    scanf("%d",&k);
    int l = bintodes(k);
    printf("%d",l);
    return 0;
}

int power(int num,int power){
    int temp = 1;
    for (int h = 1 ; h != power+1 ; h++){
        temp *= num;
    }
    return temp;
}

int bintodes(int p){
    int j = 10;
    unsigned int totel = 0;
    int temp = 0;
    int temp2 = 0; 
    for (int i = 0 ; i<50 ;i++){
        temp = p%j;
        p /= j;
        temp2 = power(2,i);
        totel += temp*temp2;
    }
    return totel;
}
