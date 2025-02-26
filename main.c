#include <stdio.h>
#include "mathheader.h"

int main() {
    int x = addTwoInts(4, 5);
    int y = subtractTwoInts(4, 5);

    printf("Sum: %d\n", x);
    printf("Difference: %d\n", y);

    return 0;
}
