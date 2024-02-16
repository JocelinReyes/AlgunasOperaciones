// declaramos nuestras bibliotecas a utilizar
#include <stdio.h>
// declaramos nuetsro metodo principal, ya que sin este no podriamos hacer que nuetsro proyecto funcione
int main (){
    
    //primero empezaremos con la mas basica que es la suma
    
    //declaramos las variables que vamos a utilizar
    int unNumero = 3;
    int otroNumero = 4;
    
    //quiero imprimir la suma de 3 mas 4
    printf("%d", unNumero + otroNumero);

    //despues veremos la multiplicacion, ya que la resta es igual que la suma solo cambiamos el signo
// declaramos variables a utilizar
    int var1 = 10;
    int var2 = 20;
    int var3 = 2;
    int res = var1 * var2 * var3;
//aqui estamos imprimiendo el resultado de la multiplicacion, junto a los valores utilizados a multiplicar
    printf("El resultado de multiplicar %d * %d * %d es: %d", var1, var2, var3, res);
    printf("\n");
//aqui estamos probando otra forma de hacer la multiplicacion y de igaul manera imprimir el resultado
    res= var1 * var2 * var3;
    printf("El resultado es: %d", res);
//aqui estamos utilizando un ejemplo de area
    double r = 5;
    double pi = 3.1416;
    double area = pi * r * r;

    printf ("%f", area);
    
    printf ("\n");
    system ("Pause");
    return 0;
}
