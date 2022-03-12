#include<stdio.h>
#include<math.h>
int main()
{
    int k=10, digit=1;
    double i, b;
    printf("Enter a number:\t");
    scanf("%lf",&i);
    do
    {
        b=(ceil(i/k)-1);
        if(b<1.0)
        {
            break;
        }
        digit++;
        k*=10;
    }
    while(b<i);
    printf("The number %.1lf has %d digits", i, digit);
    return 0;
}