#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main() {

    double raio;

    scanf("%lf", &raio);

    double area = PI * pow(raio, 2);

    printf("A=%.4lf\n", area);

    return 0;
}
