# Introducción a C++
<div align="center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="450" height="200" >
</div>

---

  -[Ventajas de usar C++](#ventajas-de-usar-c)
  -[¿Qué son las librerías STD?](#qué-son-las-librerías-std)

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

Una memoria:
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
Entre [muchos otros](https://en.wikibooks.org/wiki/C%2B%2B_Programming/Programming_Languages/C%2B%2B/Code/Statements/Variables/Type/Data_Types).

Los tipos de datos, tienen una longitud máxima de bits que puede almacenar.

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
