# Programacion_Orientada_a_Objetos_Clases_y_Objetos_en_C++

Mientras que las estructuras agrupan datos, las clases permiten crear modelos computacionales completos que integran tanto datos (atributos) como funciones (métodos). Este paradigma permite aumentar la abstracción, facilitando la resolución de problemas complejos mediante la encapsulación.

# Conceptos Fundamentales:

Clase vs. Objeto: La clase es el "plano" o definición (ej. Auto), mientras que el objeto es la instancia en tiempo de ejecución (ej. un Ferrari específico).
Encapsulamiento: Control de acceso mediante etiquetas:

- private: Atributos y funciones ocultos al exterior, accesibles solo desde dentro de la clase.
- public: Métodos accesibles por el usuario para interactuar con el objeto.

<img width="570" height="742" alt="image" src="https://github.com/user-attachments/assets/19fcada1-fc5e-4fc0-90b0-a5dbc36915d3" />

El Constructor: Una función especial que se ejecuta automáticamente al crear un objeto. Es vital para asegurar que las variables internas (como un contador o estado) se inicialicen correctamente sin depender de llamadas externas.

Escalabilidad: Definir una clase una vez permite instanciar múltiples objetos independientes (C1, C2, etc.), reduciendo drásticamente la duplicación de código y el uso de memoria en proyectos grandes.
