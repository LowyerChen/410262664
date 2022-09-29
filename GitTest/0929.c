#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i;

    scanf("%d", &i);

    int j;

    j = i%2 ;

    if (j == 0)
        printf("Even\n");

    else
        printf("Odd\n");
    return 0;
}
