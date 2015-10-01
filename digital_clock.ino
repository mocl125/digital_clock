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
void setup() {
  // put your setup code here, to run once:
  pinMode(d1, OUTPUT);
  pinMode(a,OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(d4, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(dp, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //  digitalWrite(a, LOW);
//  digitalWrite(b, LOW);
//  digitalWrite(c, LOW);
//  digitalWrite(d, LOW);
//  digitalWrite(e, LOW);
//  digitalWrite(f, LOW);
//  digitalWrite(g, LOW);
  
  digitalWrite(d1, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(d3, LOW);
  digitalWrite(d4, LOW);
  digitalWrite(dp,LOW);
  
  
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(a, HIGH);

  delay(1000);

  digitalWrite(d1, HIGH);
  digitalWrite(d2,HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  digitalWrite(dp,HIGH);
  delay(1000);

  
}
