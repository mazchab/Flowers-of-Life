#include <Servo.h>

Servo s1;         //This servo will translate Asia's BirthRate
Servo s2;         //This servo will translate Asia's DeathRate
Servo s3;         //This servo will translate Europe's BirthRate
Servo s4;         //This servo will translate Europe's DeathRate
Servo s5;         //This servo will translate Africa's BirthRate
Servo s6;         //This servo will translate Africa's DeathRate
Servo s7;         //This servo will translate South America's BirthRate
Servo s8;         //This servo will translate South America's DeathRate
Servo s9;         //This servo will translate Australia's BirthRate
Servo s10;        //This servo will translate Australia's DeathRate
Servo s11;        //This servo will translate North America's BirthRate
Servo s12;        //This servo will translate North America's DeathRate
Servo s13;        //This servo will translate the World's BirthRate
Servo s14;        //This servo will translate the World's DeathRate


void setup()
{
  Serial.begin(9600);

  s1.attach(2);
  s2.attach(3);
  s3.attach(4);
  s4.attach(5);
  s5.attach(6);
  s6.attach(7);
  s7.attach(8);
  s8.attach(9);
  s9.attach(10);
  s10.attach(26);
  s11.attach(12);
  s12.attach(13);
  s13.attach(22);
  s14.attach(24);
}

int pos = 0;

void loop()
{
 s1.write(160);         //This servo will translate the Asia's BirthRate 
 s2.write(100);         //This servo will translate the Asia's DeathRate 
 s3.write(105);         //This servo will translate the Europe's BirthRate 
 s4.write(100);         //This servo will translate the Europe's DeathRate 
 s5.write(180);        //This servo will translate the Africa's BirthRate 
 s6.write(105);         //This servo will translate the Africa's DeathRate 
 s7.write(100);         //This servo will translate the South America's BirthRate 
 s8.write(95);         //This servo will translate the South America's DeathRate 
 s9.write(100);         //This servo will translate the Australia's BirthRate 
 s10.write(180);        //This servo will translate the Australia's DeathRate 
 s11.write(180);        //This servo will translate the North America's BirthRate 
 s12.write(100);        //This servo will translate the North America's DeathRate 
 s13.write(180);       //This servo will translate the World's BirthRate 
 s14.write(170);       //This servo will translate the World's DeathRate 
}
