#include <Arduino.h>
#include "Move.h"

void myCar :: CheckSensor()
{
  delay(200);
  IR1 = digitalRead ( Infrared_Sensor_1 );    // Biến lưu cảm biến hồng ngoại 1
  IR2 = digitalRead ( Infrared_Sensor_2 );    // Biến lưu cảm biến hồng ngoại 2
  IR3 = digitalRead ( Infrared_Sensor_3 );    // Biến lưu cảm biến hồng ngoại 3
  IR4 = digitalRead ( Infrared_Sensor_4 );    // Biến lưu cảm biến hồng ngoại 4
  IR5 = digitalRead ( Infrared_Sensor_5 );    // Biến lưu cảm biến hồng ngoại 5
  Serial.print("S1: ");
  Serial.print(IR1);Serial.print("   ");
  Serial.print("S2: ");
  Serial.print(IR2);Serial.print("   ");
  Serial.print("S3: ");
  Serial.print(IR3);Serial.print("   ");
  Serial.print("S4: ");
  Serial.print(IR4);Serial.print("   ");
  Serial.print("S5: ");
  Serial.print(IR5);Serial.print("   ");
  Serial.print("Công tắc: ");
  Serial.print(gtcongtac);Serial.print("   ");
  Serial.print("\n");
}
void myCar :: Initialization_Pin()
{
  pinMode(Infrared_Sensor_1,INPUT);
  pinMode(Infrared_Sensor_2,INPUT);
  pinMode(Infrared_Sensor_3,INPUT);
  pinMode(Infrared_Sensor_4,INPUT);
  pinMode(Infrared_Sensor_5,INPUT);
  pinMode(gtcongtac,INPUT);
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  pinMode(motorAspeed, OUTPUT);
  pinMode(motorBspeed, OUTPUT);
  Serial.begin(9600);
}
void myCar :: speedlow ()
{
  analogWrite(motorAspeed , 60);
  analogWrite(motorBspeed , 60);
}
void myCar :: speedhigh ()
{
  analogWrite(motorAspeed , 120);
  analogWrite(motorBspeed , 120);
}
void myCar :: forwardd()                              // chương trình con xe robot đi tiến
{
  digitalWrite ( motorA1 , HIGH ) ;
  digitalWrite ( motorA2 , LOW ) ;
  digitalWrite ( motorB1 , LOW ) ;
  digitalWrite ( motorB2 , HIGH ) ;
}

void myCar :: turnright()                            // Chương trình robot rẽ phải
{
  digitalWrite ( motorA1 , LOW ) ;
  digitalWrite ( motorA2 , LOW ) ;
  digitalWrite ( motorB1 , LOW ) ;
  digitalWrite ( motorB2 , HIGH ) ;
}

void myCar :: turnleft()                             // Chương trình robot rẽ trái
{
  digitalWrite ( motorA1 , HIGH );
  digitalWrite ( motorA2 , LOW );
  digitalWrite ( motorB1 , LOW );
  digitalWrite ( motorB2 , LOW );
}
void myCar :: stop()
{
  digitalWrite ( motorA1 , LOW );
  digitalWrite ( motorA2 , LOW );
  digitalWrite ( motorB1 , LOW );
  digitalWrite ( motorB2 , LOW );  
  delay(200);
}
void myCar :: POINT_1()
{
  if ( IR3 == 1 ) 
  {
    forwardd();
    stop();
  }
//  else if ( IR3 == 0 && IR4 == 1 ) 
//  {
//    turnright();
//    stop();
//  }
//  if ( IR5 == 1 ) flag_1 = "on";
}
void myCar :: POINT_2()
{
  if ( IR2 == 1 && IR3 == 0 ) 
  {
    turnleft();
    stop();
  }
  else if ( IR3 == 1 ) 
  {
    forwardd();
    stop();
  }
  if ( IR5 == 1 ) flag_2 = "on";
}
void myCar :: POINT_3()
{
  if ( IR3 == 1 && IR4 == 1 && IR4 == 1 ) 
  {
    turnright();
    stop();
  }
  else if ( IR3 == 1 ) 
  {
    forwardd();
    stop();
  }
  else if ( IR2 == 1 ) 
  {
    turnleft();
    stop();
  }
  else if ( IR4 == 1 ) 
  {
    turnright();
    stop();
  }
  if ( IR5 == 1 && IR1 == 1 ) 
  {
    flag_3 = "on";
    stop();
  }
}
void myCar :: POINT_4()
{
  if ( IR3 == 1 ) forwardd();
  else if ( IR3 == 0 && IR2 == 1 ) turnleft();
  if ( IR5 == 1 ) flag_4 = "on";
}
void myCar :: POINT_5()
{
  if ( IR2 == 1 && IR3 == 0 ) turnleft();
  else if ( IR3 == 1 ) forwardd();
  if ( IR1 == 1 ) flag_5 = "on";
}
void myCar :: POINT_6()
{
  if ( IR2 == 1 ) turnleft();
  else if ( IR4 == 1 ) turnright();
  if ( IR5 == 1 ) flag_6 = "on";
}
void myCar :: POINT_7()
{
  if ( IR5 == 1 ) turnright();
  else if ( IR3 == 1 ) forwardd();
  else if ( IR5 == 1 && IR1 == 0 ) forwardd();
 // if ( )  
}
void myCar :: POINT_10()
{
  if ( IR1 == 1 ) turnleft();
  else if ( IR3 == 1 ) forwardd();
  if ( IR1 == 1 && IR2 == 1 )   flag_10 = "on";  
}
void myCar :: POINT_11()
{
  if ( IR3 == 1 ) forwardd();
  else if ( IR2 == 1 ) forwardd();
  if ( IR1 == 1 && IR2 == 1 ) flag_11 = "on";
}
void myCar :: POINT_12()
{
  if ( IR1 == 1 ) turnleft();
  else if ( IR3 == 1 ) forwardd();
  if ( IR5 == 1 ) flag_12 = "on";
}
void myCar :: POINT_13()
{
  if ( IR5 == 1 ) turnright();
  else if ( IR2 == 1 ) turnleft();
  else if ( IR3 == 1 ) forwardd();
  if ( IR1 == 1 ) flag_13 = "on";
}
void myCar :: POINT_14()
{
  if ( IR1 == 1 ) turnright();
  else if ( IR3 == 1 ) forwardd();
  else if ( IR2 == 1 ) turnleft();
  if ( IR1 == 0 && IR2 == 0 && IR3 == 0 && IR4 == 0 && IR5 == 0 ) flag_14 = "on";
}
void myCar :: POINT_15()
{
  forwardd();
  if ( IR5 == 1 ) turnright();
  else if ( IR3 == 1 ) forwardd();
  if ( IR1 == 0 && IR2 == 0 && IR3 == 0 && IR4 == 0 && IR5 == 0 )  stop(); 
}