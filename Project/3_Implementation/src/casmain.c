#include"cas.h"
Ultrasonic ultrasonic(A0, A1);
int distance;
int maxdistance = 20;
int m1forward = 22; //1a
int m1backward = 24; //2a
int m2forward = 26; //3a
int m2backward = 28;  
int breakpedal= 30;
int ENA = 5;
int ENB = 4;
int ENA1 = 2;
int ENB1 = 3;


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
  pinMode(ENA1, OUTPUT);
  pinMode(ENB1, OUTPUT);


  pinMode(m3forward,OUTPUT);
  pinMode(m3backward,OUTPUT);
  pinMode(m4forward,OUTPUT);
  pinMode(m4backward,OUTPUT);
 
  
  
 
}

void loop() {

 
   analogWrite(ENA, 255);
   analogWrite(ENB, 255);
   analogWrite(ENA1, 255);
   analogWrite(ENB1, 255);
   distance = ultrasonic.read();
  
   Serial.print("Distance in CM: ");
   Serial.println(distance);
  //delay(1000);

   if(distance<10)
    {
     halt();
    }
   else if(distance>10 && distance<20)
   {
     changeSpeed();
   }
   else
   {
    forward();
   }

}