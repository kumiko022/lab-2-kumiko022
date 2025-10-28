# Ejercicio de laboratorio 2 – Múltiplos

## Descripción

Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo. [Sugerencia: use el operador de módulo.]

```cmd
Ingrese dos enteros: 22 8
22 no es un múltiplo de 8
```

## Contesta las siguientes preguntas

1. ¿Se puede utilizar el operador de módulo con operandos no enteros? ¿Se puede usar con números negativos? Supongamos que el usuario ha introducido los siguientes conjuntos de números. Para cada serie, ¿qué produce en la tercera columna? Si hay un error, explique por qué.

   | Entero 1 | Entero 2 | Expresión        | Salida |
   | -------- | -------- | ---------------- | ------ |
   | 73       | 22       | cout << 73 % 22; |   7    |
   | 0        | 100      | cout << 0 % 100; |   0    |
   | 100      | 0        | cout << 100 % 0; |        | No se puede dividir ni sacar residuo con 0
   | -3       | 3        | cout << -3 % 3;  |   0    |
   | 9        | 4.5      | cout << 9 % 4.5; |        | Solo se puede con números enteros
   | 16       | 2        | cout << 16 % 2;  |   0    |

2. ¿Qué pasa si colocamos un punto y coma (;) después del final de la expresión de condición de una declaración if? Se rompe la lógica, porque hace que se acabe con la condición del if.

3. Modifique el programa para determinar si un número ingresado es par o impar. [Nota: Ahora, el usuario necesita ingresar solo un número.]
<img width="754" height="213" alt="Image" src="https://github.com/user-attachments/assets/009a561e-6428-4930-a429-a196c6a0cffb" />

## ✅ Resultado

<img width="744" height="513" alt="Image" src="https://github.com/user-attachments/assets/fec00cfd-4183-4f78-814c-c21c2f16f37a" />
