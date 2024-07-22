// color_pair_utils.h
#ifndef COLOR_PAIR_UTILS_H
#define COLOR_PAIR_UTILS_H

#include "color_pair.h"

void colorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair getColorFromPairNumber(int pairNumber);
int getPairNumberFromColor(const ColorPair* colorPair);
void printColorCodingReferenceManual();

#endif // COLOR_PAIR_UTILS_H
