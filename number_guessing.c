#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int ram,ges; 
    srand(time(NULL));


    printf("-------Welcome to our Game-------");
    ram = rand() % 100 + 1;

    printf("\nyou have 10 life");
    for (int i = 0 ; ram != ges && i <= 10 ; i++ ){
        printf("\nGive your guess num between(1 to 100) : ");
        scanf("%d",&ges);

        if (ges < ram){
            printf("Biger Than yours\n");
        }
        else if (ges > ram){
            printf("smaller Than yours\n");
        }
        else{
            printf("you get me\n");
            printf("you done it on %d time\n",i+1);
        }
    }
    printf("\nBye Bro\n");
    printf("Developed by : Mahfuz Ahmed Noman\n");
    return 0;
}
