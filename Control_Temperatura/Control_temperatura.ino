#include "ConversorTemperatura.h"

// Creamos la instancia (objeto) de la clase
ConversorTemperatura conversor;

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ; // Espera a que se conecte el monitor serial
  }

  Serial.println("--- Demostracion de POO con Archivos Separados ---");
  Serial.println();

  // Ejemplo 1: Convertir de Celsius a Fahrenheit
  float temperaturaC = 25.0;
  float resultadoF = conversor.celsiusToFahrenheit(temperaturaC);
  
  Serial.print(temperaturaC);
  Serial.print(" grados Celsius equivalen a: ");
  Serial.print(resultadoF);
  Serial.println(" Fahrenheit.");

  // Ejemplo 2: Convertir de Fahrenheit a Celsius
  float temperaturaF = 77.0;
  float resultadoC = conversor.fahrenheitToCelsius(temperaturaF);
  
  Serial.print(temperaturaF);
  Serial.print(" grados Fahrenheit equivalen a: ");
  Serial.print(resultadoC);
  Serial.println(" Celsius.");
}

void loop() {
  // Se deja vacío para ejecutar la demostración una sola vez
}