
#include <SoftwareSerial.h>

SoftwareSerial mySerial(9,10);

void setup()

{

  mySerial.begin(9600);                    // Set baud rate of GSM Module  

  Serial.begin(9600);                      // Set baud rate Serial Monitor (Arduino)

  Serial.println("GSM SIM900A");             

  Serial.println("Masukkan pilihan anda.."); 

  Serial.println("s : untuk menghantar SMS");

  delay(100);

}
