#include "volumen.h"
Volumen vc;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}
void loop() {
  // put your main code here, to run repeatedly:
vc.calculo(2,7,8);
Serial.println(vc.valor());
delay(1000);
}
