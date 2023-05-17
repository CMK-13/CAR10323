#ifndef Move_h
#define Move_h
#include "AFMotor.h"
#include "Arduino.h"

class myCar
{
  private:

      //L298 kết nối arduino

      const int motorA1      = 2;           // kết nối chân IN1 với chân 2 arduino
      const int motorA2      = 3;           // kết nối chân IN2 với chân 3 arduino
      const int motorAspeed  = 5;           // kết nối chân ENA với chân 5 arduino
      const int motorB1      = 4;           // kết nối chân IN3 với chân 4 arduino
      const int motorB2      = 7;           // kết nối chân IN4 với chân 7 arduino
      const int motorBspeed  = 6;           // kết nối chân ENB với chân 6 arduino

      int gtcongtac = 13;

      //kết nối của 5 cảm biến hồng ngoại ( dò line )

      const int Infrared_Sensor_1 = 8;      // Cảm biến dò line thứ nhất
      const int Infrared_Sensor_2 = 9;      // cảm biến dò line thứ hai  
      const int Infrared_Sensor_3 = 10;     // Cảm biến dò line thứ ba      
      const int Infrared_Sensor_4 = 11;     // Cảm biến dò line thứ tư  
      const int Infrared_Sensor_5 = 12;     // Cảm biến dò line thứ năm       

      // Khởi tạo các biến lưu trữ giá trị Digital của các cảm biến trên

      int IR1;                              // Biến lưu giá trị cảm biến hồng ngoại 1
      int IR2;                              // Biến lưu giá trị cảm biến hồng ngoại 2
      int IR3;                              // Biến lưu giá trị cảm biến hồng ngoại 3
      int IR4;                              // Biến lưu giá trị cảm biến hồng ngoại 4
      int IR5;                              // Biến lưu giá trị cảm biến hồng ngoại 5

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
  public:
      void CheckSensor();
      void Initialization_Pin();
      void forwardd();
      void turnleft();
      void turnright();
      void stop();
      void POINT_1();
      void POINT_2();
      void POINT_3();
      void POINT_4();
      void POINT_5();
      void POINT_6();
      void POINT_7();
      void POINT_8();
      void POINT_9();
      void POINT_10();
      void POINT_11();
      void POINT_12();
      void POINT_13();
      void POINT_14();
      void POINT_15();
      void speedlow();
      void speedhigh();
};
#endif
