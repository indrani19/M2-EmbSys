#include"cas.h"
Ultrasonic ultrasonic(A0, A1);
int distance;
int maxdistance = 100;
int m1forward = 22; //1a
int m1backward = 24; //2a
int m2forward = 26; //3a
int m2backward = 28;  
int breakpedal= 30;
int ENA = 5;
int ENB = 4;

int m3forward = 32; //1a
int m3backward = 34; //2a
int m4forward = 38; //3a
int m4backward = 36;  


void setup() {
  Serial.begin(9600);

  pinMode(m1forward,OUTPUT);
  pinMode(m1backward,OUTPUT);
  pinMode(m2forward,OUTPUT);
  pinMode(m2backward,OUTPUT);
  pinMode(breakpedal,OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(m3forward,OUTPUT);
  pinMode(m3backward,OUTPUT);
  pinMode(m4forward,OUTPUT);
  pinMode(m4backward,OUTPUT);
 
  
  
 
}

void loop() {

 
   analogWrite(ENA, 255);
   analogWrite(ENB, 255);
   distance = ultrasonic.read();
  
   Serial.print("Distance in CM: ");
   Serial.println(distance);
  //delay(1000);

   if(distance<100)
    {
     halt();
    }
   else if(distance>100 && distance<200)
   {
     changeSpeed();
   }
   else
   {
    forward();
   }

}