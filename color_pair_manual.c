#include <stdio.h>
#include "ColorPair.h"
#include "ColorPairUtils.h"

void printColorCodingReferenceManual() {
    char buffer[16];
    for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
        ColorPair colorPair = getColorFromPairNumber(pairNumber);
        colorPairToString(&colorPair, buffer);
        printf("%2d: %s\n", pairNumber, buffer);
    }
}
