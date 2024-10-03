#include <stdio.h>
#include <stdlib.h>
int main(void) {
    printf("number\tsquare\tcube\n");
    for (int number=0;number<=10;++number) {
        int square=number*number;
        int cube=number*number*number;
        printf("%d\t%d\t%d\n",number,square,cube);
    }
    return 0;
}
