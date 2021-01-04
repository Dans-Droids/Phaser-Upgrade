/* Last Edit: 04/01/2021 */

/*-----------------------------------------  
      ~Dans Modified Phaser 2020~
   Star Trek TNG Phaser
   Arduino Nano3 (Micro)
   250mw Red Laser Diode
   5v3a Power Adaptor
   3.7v 1.2Ah LiPo
   Micro USB Charger
   Master Power Switch
-------------------------------------------*/

// Include Libraries
#include "Arduino.h"
#include "Laser.h"


// Pin Definitions
#define LASER_PIN_S	2

// object initialization
Laser laser(LASER_PIN_S);

const int button = 3;

void setup()
{
  Serial.begin(9600);
  pinMode(3, INPUT);
}

void loop()
{
  if (digitalRead(3) == HIGH) {
    Serial.println("Laser On");
    laser.on();
  }
  else if (digitalRead(3) == LOW) {
    Serial.println("Laser Off");
    laser.off();
  }

}
