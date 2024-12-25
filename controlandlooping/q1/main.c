#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", t1, t2);

    for (i = 3; i <= n; i++)
    {
        printf(", %d", t1 + t2);
        int temp = t1;
        t1 = t2;
        t2 = temp + t2;
    }
    return 0;
}
