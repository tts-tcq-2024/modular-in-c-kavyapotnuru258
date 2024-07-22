// number_to_color_pair.c
#include <stdio.h>
#include "color_pair.h"
#include "color_pair_utils.h"

ColorPair getColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.major = 
        (enum majorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minor =
        (enum minorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}
