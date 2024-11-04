#include<stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) && n > 0) {
        int xo, yo;
        scanf("%d %d", &xo, &yo);
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            if (x == xo || y == yo) {
                printf("divisa\n");
            } else if (x > xo && y > yo) {
                printf("NE\n");
            } else if (x < xo && y > yo) {
                printf("NO\n");
            } else if (x > xo && y < yo) {
                printf("SE\n");
            } else {
                printf("SO\n");
            }
        }
    }
    return 0;
}
