#ifndef ConversorTemperatura_h
#define ConversorTemperatura_h

class ConversorTemperatura {
  public:
    // Constructor vacío
    ConversorTemperatura() {}

    // Método para convertir de Celsius a Fahrenheit
    float celsiusToFahrenheit(float celsius) {
      return (celsius * 9.0 / 5.0) + 32.0;
    }

    // Método para convertir de Fahrenheit a Celsius
    float fahrenheitToCelsius(float fahrenheit) {
      return (fahrenheit - 32.0) * 5.0 / 9.0;
    }
};

#endif