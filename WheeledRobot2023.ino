#include "Move.h"

myCar myCar;

 String flag_1 = "off";
 String flag_2 = "off";
 String flag_3 = "off";
 String flag_4 = "off";
 String flag_5 = "off";
 String flag_6 = "off";
 String flag_7 = "off";
 String flag_8 = "off";
 String flag_9 = "off";
 String flag_10 = "off";
 String flag_11 = "off";
 String flag_12 = "off";
 String flag_13 = "off";
 String flag_14 = "off";
 String flag_15 = "off";
 
void setup()
{
  myCar.Initialization_Pin();
}

void loop()
{
  myCar.CheckSensor();
  myCar.POINT_1();
 // if ( IR3 == 1 ) forwardd();
//  if ( flag_1 == "off" ) myCar.POINT_1();
//  else if ( flag_2 == "off" ) myCar.POINT_2();
//  else if ( flag_3 == "off" ) myCar.POINT_3();
 // else if ( flag_4 == "off" ) myCar.POINT_4();
//  else if ( flag_5 == "off" ) myCar.POINT_5();
//  else if ( flag_6 == "off" ) myCar.POINT_6();
//  else if ( flag_7 == "off" ) myCar.POINT_7();
  //else if ( flag_8 == "off" ) myCar.POINT_8();
  //else if ( flag_9 == "off" ) myCar.POINT_9();
//  else if ( flag_10 == "off" ) myCar.POINT_10();
//  else if ( flag_11 == "off" ) myCar.POINT_11();
//  else if ( flag_12 == "off" ) myCar.POINT_12();
//  else if ( flag_13 == "off" ) myCar.POINT_13();
//  else if ( flag_14 == "off" ) myCar.POINT_14();
//  else if ( flag_15 == "off" ) myCar.POINT_15();
}