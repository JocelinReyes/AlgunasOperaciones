#include <stdio.h>
 
int main(){
    int var1 = 10;
    int var2 = 20;
    int var3 = 2;
    int res = var1 * var2 * var3;

    printf("El ressultado de multiplicar %d * %d * %d es: %d", var1, var2, var3, res); //resultado 
    printf("\n");

    res= var1 * var2 * var3;
    printf("El resultado es: %d", res);

    printf("\n");
    system("Pause");
    return 0;
}