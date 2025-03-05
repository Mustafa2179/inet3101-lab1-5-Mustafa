#include <stdio.h>
#include "mathfunctions.h"

int main() {
    int sum = addTwoInts(4, 5);
    int difference = subtractTwoInts(10, 3);

    printf("Adding 4 and 5 gives: %d\n", sum);
    printf("Subtracting 3 from 10 gives: %d\n", difference);

    return 0;
}
