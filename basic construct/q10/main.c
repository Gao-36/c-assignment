#include <stdio.h>

int main()
{
    int agg;
    float perc;
    int eng, math, nep, soc, phy;
    
    printf("Enter marks of the specific subject.\n");
    printf("English: ");
    scanf("%d", &eng);
    printf("Mathematics: ");
    scanf("%d", &math);
    printf("Nepali: ");
    scanf("%d", &nep);
    printf("Social: ");
    scanf("%d", &soc);
    printf("Physics: ");
    scanf("%d", &phy);
    
    // Calculate aggregate marks
    agg = eng + math + nep + soc + phy;
    
    // Correct percentage calculation
    perc = (float)agg / 5.0;
    
    // Print with formatting
    printf("Total marks obtained %d out of 500 and percentage marks obtained is %.2f%%\n", agg, perc);
    
    return 0;
}