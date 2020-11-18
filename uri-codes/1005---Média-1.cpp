#include <stdio.h>


int main()
{
    float a,b,media;
    scanf("%f",&a);
    scanf("%f",&b);
    a = a*3.5;
    b = b*7.5;
    media = (a+b)/11;
    printf("MEDIA = %.5f\n",media);
    return 0;
}

