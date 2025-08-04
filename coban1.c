#include <stdio.h>
int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    int sochan =0;
    int sole =0;
    for (int i=1;i<=n;i++) {
        int temp=i;
        while (temp>0) {
            int chuso=temp%10;
            if (chuso%2==0)
                sochan++;
            else
                sole++;
            temp/=10;
        }
    }
    printf("Tu 1 den %d, co %d chu so chan va %d chu so le.\n", n, so_chan, so_le);
    return 0;
}