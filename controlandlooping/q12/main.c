#include<stdio.h>

int main(){
    int n, pow, result = 1;
    printf("Enter a numbers and its power: ");
    scanf("%d %d", &n, &pow);
    for(int i = 0;i < pow; i++){
        result *= n;
    }
    printf("result is %d", result);
    return 0;
}