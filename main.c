#include "functions.h"


int main() {
    printf(".......TESTS........\n");
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    printf("\n\n");
    printf(".......Table of colors........\n");
    PrintColorPairTable();
    return 0;
}
