#include<stdio.h>

int main(){
    int i = 10, sum = 0;
    while (i > 0)
    {
        printf("%d\n", i);
        sum = sum + i;
        i = i - 1;
    };
    printf("sum is %d", sum);
    
    return 0;
}