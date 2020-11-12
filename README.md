###### Bienvenid@! :purple_heart: Puedes encontrame en: 
[![Twitter](https://user-images.githubusercontent.com/282759/84680160-40c90c80-af00-11ea-8390-bb86858c5fa5.png)](https://twitter.com/AbdielGuerrer20) [![LinkedIn](https://user-images.githubusercontent.com/282759/84680162-4161a300-af00-11ea-912c-8f32e5cc1676.png)](https://www.linkedin.com/in/abdiel-guerrero-360a39195/)

[![Twitter: AbdielGuerrero](https://img.shields.io/twitter/follow/AbdielGuerrer20?style=social)](https://twitter.com/AbdielGuerrer20)[![Linkedin:Abdiel Guerrero](https://img.shields.io/badge/-AbdielGuerrero-blue?style=flat-square&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/abdiel-guerrero-360a39195/)](https://www.linkedin.com/in/abdiel-guerrero-360a39195/)[![GitHub abdielgv162](https://img.shields.io/github/followers/abdielgv162?label=follow&style=social)](https://github.com/abdielgv162)[![Instagram: AbdielGuerrero](https://img.shields.io/badge/-abdielgv162-blue?style=flat-square&logo=Instagram&logoColor=white&link=https://www.instagram.com/abdielgv162/)](https://www.instagram.com/abdielgv162/)

---

# Introducción a C++
<div align="center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="450" height="200" >
</div>

---

  - [Ventajas de usar C++](#ventajas-de-usar-c)
  - [¿Qué son las librerías STD?](#qué-son-las-librerías-std)

---

## Ventajas de usar C++
  * Veloz : Manejo de memoria sin maquina virtual o recolector de basura (garbage collector).
  * Complejo: Una gran cantidad de librerías y nuevos paradigmas de programación, constantemente en crecimiento.
  * Orientado a programación orientada a objetos.
 
Es utilizado para aplicaciones que requieren de una optimización de recursos y manejor de memoria como prioridad, al mismo tiempo de ser escalable, modular y distribuido en varias plataformas.

---
## ¿Qué son las librerías STD?

La librerías son pedazos de código que otras personas han escrito con anterioridad que se implementan para que más usuarios puedan acceder a las funciones que tiene defininidas dentro de ellas.

Tenemos un conjunto de [librerias estándar](https://www.ecured.cu/Librer%C3%ADa_Est%C3%A1ndar_C%2B%2B) como por ejemplo, *\<stdio.h>* *\<iostream>*, entre muchas otras.

Un programa básico de C++ tiene la siguiente estructura

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
```
---
## Módulo 1: Manejo de memoria

*Una memoria:*
* Codifica
* Almacena
* Recupera

Los datos de la computadora suelen almacenarse especialmente en el disco duro y en la memoria RAM.

### Tipos de datos 

Es una clasificación que le damos a la información para hacer saber al compilador cómo va a ser escrita e interpretada.

*Existen los tipos de datos:*
* Int: enteros
* Float: flotantes
* Bool: booleanos
* Chars: caracteres 
* Vacío: void
* [Entre muchos otros](https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Statements/Variables/Type/Data_Types).

Cada tipo de dato, tienen una longitud máxima de bits que puede almacenar.

Ejemplo de como podriamos imprimir distintos tipos de datos:

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << 10<< endl;//INT
    cout << 3.1416f<< endl;//FLOAT
    cout << true << endl;//BOOL
    cout << 'Caracter'<< endl;//CHAR 
    cout << "Tambien podemos desplegar un mensaje asi"<< endl;
    return 0;
}
```

### Almacenando variables en memoria

Una variable es un **espacio reservado** en memoria, definido por un *tipo de dato* y un *nombre asignado*, en el cual se puede guardar un valor y se puede modificar.

*Para guardar una variable:*

* Declaramos que tipo de variable es (int, ,float, char, bool, etc).
* Le asignamos un nombre.
* Como buena practica es bueno inicializar la variable con algún valor, ya que puede interferir con los valores que suelen tenes asignados por la memoria por defecto.

```c++
#include <iostream>
using namespace std;
int main()
{
    int num = 12;
    float flot = 3.1416;
    char carac = 'abc';
    bool bin = false;
    bool bin2 = true;
    cout << carac << endl;
    cout << CualquierOtraVariable << endl;
    return 0;
}
```

### Operadores

**¿Qué son los operadores?**
Son símbolos que le permiten al programador hacer manipulaciones generalmente aritméticas o lógicas usando uno o más datos.

**Operadores aritmeticos**
* Suma: \+
* Resta: \-
* Multiplicación: \*
* División: \/
* Módulo:Este es el residuo de una división \% 
* Asignación: \=

