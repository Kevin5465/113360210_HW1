#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1, n2;
    printf("�п�J��Ӿ��:");
    scanf("%d %d", &n1, &n2);
    if (n2 != 0 && n1 % n2 == 0) {
        printf("%d�O%d�����ơC\n", n1, n2);
    }
    else {
        printf("%d���O%d�����ơC\n", n1, n2);
    }
    return 0;
}
