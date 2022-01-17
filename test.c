#include <assert.h>
#include "main.h"

const int MAX_COLORPAIR_NAME_CHARS = 16;

void  testColorfromPairNumber (int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    PrintColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairNumberfromColor (
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

void testPrintManualColorCode()
{
    PrintManualColorCode();
    return(1);
}

void main() {
    testColorfromPairNumber(4, WHITE, BROWN);
    testColorfromPairNumber(5, WHITE, SLATE);

    testPairNumberfromColor(BLACK, ORANGE, 12);
    testPairNumberfromColor(VIOLET, SLATE, 25);
    
    testPrintManualColorCode();
}
