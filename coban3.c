#include <stdio.h>
int main() {
    int n, original, reversed = 0;
    do {
        printf("Nhập một số nguyên dương: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui lòng nhập số lớn hơn 0.\n");
        }
    } while (n <= 0);
    original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (original == reversed) {
        printf("%d là số đối xứng.\n", original);
    } else {
        printf("%d không phải là số đối xứng.\n", original);
    }
    return 0;
}