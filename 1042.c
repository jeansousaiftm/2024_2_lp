#include<stdio.h>

int main() {

    int v1, v2, v3, o1, o2, o3;

    scanf("%d %d %d", &v1, &v2, &v3);

    o1 = v1;
    o2 = v2;
    o3 = v3;

    if (v1 > v2) {
        int tmp = v1;
        v1 = v2;
        v2 = tmp;
    }

    if (v1 > v3) {
        int tmp = v1;
        v1 = v3;
        v3 = tmp;
    }

    if (v2 > v3) {
        int tmp = v2;
        v2 = v3;
        v3 = tmp;
    }

    printf("%d\n%d\n%d\n\n", v1, v2, v3);
    printf("%d\n%d\n%d\n", o1, o2, o3);

    return 0;
}
