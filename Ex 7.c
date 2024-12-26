#include <stdio.h>
int main() {
    int m, n;
    int first = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Prime numbers between %d and %d: ", n, m);
    for (int i = n; i <= m; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }}
        if (count == 2) {
            if (!first) {
                printf(", ");
            }
            printf("%d", i);
            first = 0;
        }}
    printf(".\n");

}
