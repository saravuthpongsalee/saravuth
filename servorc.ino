#include <Servo.h> 
Servo myservo;   
void setup() 
{ 
  myservo.attach(9);  เปลี่ยนขาที่ต่อกับ servo
} 
void loop() 
{       myservo.write(180); 
        delay(1000);      
        myservo.write(90); 
        delay(1000); 
        myservo.write(0); 
        delay(1000); 
        myservo.write(90); 
        delay(1000);                     
}