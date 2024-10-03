#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1, n2;
    printf("請輸入兩個整數:");
    scanf("%d %d", &n1, &n2);
    if (n2 != 0 && n1 % n2 == 0) {
        printf("%d是%d的倍數。\n", n1, n2);
    }
    else {
        printf("%d不是%d的倍數。\n", n1, n2);
    }
    return 0;
}
