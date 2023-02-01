// Write 

#include<stdio.h>
#include<math.h>

int main()
{
    float divident, divisor, remainder1;
    printf("Enter the divident and divisor: ");
    scanf("%f%f", &divident, &divisor);
    remainder1 = remainder(divident , divisor);
    printf("The remainder is: %f", remainder1);
    return 0;
}