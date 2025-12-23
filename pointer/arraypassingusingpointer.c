#include <stdio.h>

void update(int *arr) {
    arr[0] = 100;
}

int main() {
    int a[3] = {10, 20, 30};

    update(a);

    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}