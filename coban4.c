#include <stdio.h>
int main() {
    int m, n;
    printf("Nhap chieu dai hcn: ");
    scanf("%d",&m);
    printf("Nhap chieu rong hcn: ");
    scanf("%d",&n);
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}