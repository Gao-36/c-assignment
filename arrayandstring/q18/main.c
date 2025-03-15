#include <stdio.h>
#include<string.h>

int main()
{
    int i, len, flag = 1;
    char org[100];
    printf("enter a string: ");
    scanf("%s", org);
    len = strlen(org);
    for(i = 0; i < len/2; i++){
        if(org[i] != org[len - 1 - i]){
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("The string is palindrome.");
    } else {
        printf("The string is not palindrome.");
    }
    return 0;
}