// Arduino Clock
// 

#include "SevSeg.h"
        

#define d1 13
#define a  2
#define f  7
#define d2 12
#define d3 11
#define b  3
#define d4 10
#define g  8
#define c  4
#define dp 9
#define d  5
#define e  6

SevSeg sevseg;

void setup() {
  // put your setup code here, to run once:
   byte numDigits = 4;
   byte digitPins[] = {d1, d2, d3, d4};
   byte segmentPins[] = {a, b, c, d, e, f, g, dp};
   sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins);
}

void loop() {
  // put your main code here, to run repeatedly:
  sevseg.setNumber(3.141f,3);
  sevseg.refreshDisplay();
  sevseg.setBrightness(90);
}
