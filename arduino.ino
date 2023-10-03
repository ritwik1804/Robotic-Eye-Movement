#include <Servo.h>

Servo leftHorizontalServo;
Servo leftVerticalServo;
Servo rightHorizontalServo;
Servo rightVerticalServo;

int horizontalPos = 90;  // Initial horizontal position (centered)
int verticalPos = 90;    // Initial vertical position (centered)

void setup() {
  leftHorizontalServo.attach(9);    // Attach the left horizontal servo to digital pin 9
  leftVerticalServo.attach(10);     // Attach the left vertical servo to digital pin 10
  rightHorizontalServo.attach(6);   // Attach the right horizontal servo to digital pin 6
  rightVerticalServo.attach(5);     // Attach the right vertical servo to digital pin 5

  leftHorizontalServo.write(horizontalPos);  // Set the initial left horizontal position
  leftVerticalServo.write(verticalPos);      // Set the initial left vertical position
  rightHorizontalServo.write(horizontalPos); // Set the initial right horizontal position
  rightVerticalServo.write(verticalPos);     // Set the initial right vertical position
}

void loop() {
    // Move both eyes vertically from top to bottom
  for (verticalPos = 60; verticalPos <= 180; verticalPos++) {
    rightVerticalServo.write(verticalPos);
    leftVerticalServo.write(verticalPos);
    
    delay(10); // Adjust this delay for the desired speed of movement
  }
  // Move both eyes horizontally from left to right
  for (horizontalPos = 60; horizontalPos <= 120; horizontalPos++) {
    
    rightHorizontalServo.write(horizontalPos);
    leftHorizontalServo.write(horizontalPos);
    delay(10); // Adjust this delay for the desired speed of movement
  }

  



  delay(1000);  // Pause for a moment

  // Return both eyes to the center position
  leftHorizontalServo.write(90);
  leftVerticalServo.write(90);
  rightHorizontalServo.write(90);
  rightVerticalServo.write(90);

  delay(1000);  // Pause before repeating the movement
}
