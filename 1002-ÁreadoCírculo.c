#include <stdio.h>
#define PI 3.14159

int main()
{
    double area, raio;
    
    scanf("%lf", &raio);
    area = PI * (raio * raio);
    printf("A=%.4lf\n", area);
    
    return 0;
}