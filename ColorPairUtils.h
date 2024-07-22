// ColorPairUtils.h
#ifndef COLOR_PAIR_UTILS_H
#define COLOR_PAIR_UTILS_H

#include "ColorPair.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif // COLOR_PAIR_UTILS_H
