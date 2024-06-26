#include <Servo.h>

Servo myservo;
int pos = 95;    

void setup() {
  myservo.attach(9);  //D9 for arduino nano
}

void loop() {
  for (pos = 95; pos <= 135; pos += 1) { 
    myservo.write(pos);              
    delay(20);                       
  }
  for (pos = 135; pos >= 95; pos -= 1) { 
    myservo.write(pos);              
    delay(10);                       
  }
  delay(1000);
  for (pos = 95; pos >= 55; pos -= 1) { 
    myservo.write(pos);              
    delay(20);                       
  }
  for (pos = 55; pos <= 95; pos += 1) { 
    myservo.write(pos);              
    delay(10);                       
  }
  delay(1000);
}

// #include <Servo.h>
// Servo myservo;  
// int pos = 95;
// void setup() {
//   myservo.attach(9);  // attaches the servo on pin 9 to the servo object
// }
// void loop() {
//     myservo.write(pos);          
//     while(1);
// }

