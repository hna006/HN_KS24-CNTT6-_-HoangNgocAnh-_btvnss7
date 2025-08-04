#include <stdio.h>
int main() {
    int n, reversed = 0;
    printf("Nhập một số nguyên: ");
    scanf("%d", &n);
    int isNegative = 0;
    if (n < 0) {
        isNegative = 1;
        n = -n;
    }
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (isNegative) {
        reversed = -reversed;
    }
    printf("Số đảo ngược là: %d\n", reversed);
    return 0;
}