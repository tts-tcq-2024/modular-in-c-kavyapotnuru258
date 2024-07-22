// color_pair_manual.c
#include <stdio.h>
#include "color_pair.h"
#include "color_pair_utils.h"

void printColorCodingReferenceManual() {
    char buffer[16];
    for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
        ColorPair colorPair = getColorFromPairNumber(pairNumber);
        colorPairToString(&colorPair, buffer);
        printf("%2d: %s\n", pairNumber, buffer);
    }
}
