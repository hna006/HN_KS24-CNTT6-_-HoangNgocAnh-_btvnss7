#include <stdio.h>
int main() {
    int n, original, sum = 0, digits = 0;
    printf("Nhập một số nguyên dương: ");
    scanf("%d", &n);
    original = n;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == original) {
        printf("%d là số Armstrong.\n", original);
    } else {
        printf("%d không phải là số Armstrong.\n", original);
    }
    return 0;
}