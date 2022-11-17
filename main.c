#include "functions.h"


int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    //funcion que llame a imprimir tabla de cables
    PrintColorPairTable();
    return 0;
}
