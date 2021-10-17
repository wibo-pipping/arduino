#include <SoftwareSerial.h>
SoftwareSerial espSerial =  SoftwareSerial(2,3); 

void setup() {
  // put your setup code here, to run once:
  espSerial.begin(9600);  
  espSerial.setTimeout(50);


}

void loop() {
  // put your main code here, to run repeatedly:

}
