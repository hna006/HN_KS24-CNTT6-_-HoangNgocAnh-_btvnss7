#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int a, b;
    printf("Nhập hai số nguyên a và b (a <= b): ");
    scanf("%d %d", &a, &b);
    printf("Các số nguyên tố trong khoảng [%d, %d] là:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}