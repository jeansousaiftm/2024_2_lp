#include<stdio.h>
#include<math.h>

int main() {
    int x, y, t;
    scanf("%d %d", &x, &y);
    t = x * y;
    for (int i = 10; i < 100; i += 10) {
        double d = (double) t * (i / 100.0);
        if (i > 10) printf(" ");
        printf("%.0lf", ceil(d));
    }
    printf("\n");
    return 0;
}
