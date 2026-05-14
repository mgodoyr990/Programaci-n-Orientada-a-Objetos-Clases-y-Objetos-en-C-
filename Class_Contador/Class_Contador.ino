#include "contador.h"

Contador C1,C2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
C1.SetContador(2);
C1.Incrementar();
Serial.print("C1= ");Serial.println(C1.GetCont());


C2.SetContador(0);
C2.Incrementar();C2.Incrementar();
Serial.print("C2= ");Serial.println(C2.GetCont());


delay(1000);
}
