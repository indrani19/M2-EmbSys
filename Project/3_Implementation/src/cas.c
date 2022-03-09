#include"cas.h"
void forward(void)
{
  
    digitalWrite(breakpedal,LOW);
    //delay(100);
    digitalWrite(m1forward,HIGH);
    digitalWrite(m1backward,LOW);
    digitalWrite(m2forward,HIGH);
    digitalWrite(m2backward,LOW);

    digitalWrite(m3forward,HIGH);
    digitalWrite(m3backward,LOW);
    digitalWrite(m4forward,HIGH);
    digitalWrite(m4backward,LOW);
 }
  

void halt(void)
{

   digitalWrite(breakpedal,HIGH);
   
   digitalWrite(m1forward,LOW);
   digitalWrite(m1backward,LOW);
   digitalWrite(m2forward,LOW);
   digitalWrite(m2backward,LOW);

   digitalWrite(m3forward,LOW);
   digitalWrite(m3backward,LOW);
   digitalWrite(m4forward,LOW);
   digitalWrite(m4backward,LOW);
}

void changeSpeed(void) 
{
  // Motors ON

    analogWrite(ENA, 255);
    analogWrite(ENB, 255);
    digitalWrite(breakpedal,LOW);
  
    digitalWrite(m1forward,LOW);
    digitalWrite(m1backward,HIGH);
    digitalWrite(m2forward,LOW);
    digitalWrite(m2backward,HIGH);

    digitalWrite(m3forward,LOW);
    digitalWrite(m3backward,HIGH);
    digitalWrite(m4forward,LOW);
    digitalWrite(m4backward,HIGH);
  
  // Speed Up
   for (int i = 0; i < 256; i++) {
    analogWrite(ENA, i);
    analogWrite(ENB, i);
    analogWrite(ENA1, i);
    analogWrite(ENB1, i);
    delay(20);
  }
  
  // Speed Down
  for (int i = 255; i >= 0; --i) {
    analogWrite(ENA, i);
    analogWrite(ENB, i);
    analogWrite(ENA1, i);
    analogWrite(ENB1, i);
    delay(20);
  }
  
  

}
 