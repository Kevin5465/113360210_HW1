#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int num1, num2, num3;
    int L, S;
    printf("�п�J�T�Ӿ��:");
    scanf("%d %d %d", &num1, &num2, &num3);
    L = S = num1;
    if (num2 > L) L = num2;
    if (num3 > L) L = num3;
    if (num2 < S) S = num2;
    if (num3 < S) S = num3;
    printf("�̤j���ƬO: %d\n", L);
    printf("�̤p���ƬO: %d\n", S);
    return 0;
}

