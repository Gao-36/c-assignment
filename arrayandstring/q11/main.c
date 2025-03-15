#include<stdio.h>

int main(){
    int i, j;
    printf("1\n");
    for(i = 2; i <= 100; i++){
        int flag = 1;
        for(j = 2; j * j < i; j++){
            if(i % j == 0){
                flag = 0; 
                break;
            }
        }
        if(flag == 1){
            printf("%d\n", i);
        }
    }

    return 0;
}