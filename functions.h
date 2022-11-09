
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdio.h>
#include <assert.h>

#include "functions.c"

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber( enum MajorColor major, enum MinorColor minor, int expectedPairNumber);


#endif