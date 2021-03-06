/* Autor: Luis Gonzalo Guzman Sanchez, Realizado: 10/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programacion Estructurada 
Ciclo: 01/2022
Este es un programa de condicionales de Lenguaje C de la materia de Programacion Estructurada
Muestra el uso de:

    -Variables enteras y flotantes
    -printf para mostrar varias variables
    -scanf<
    -El uso de include para las librerias
    -condicional if-else if
    -Comentarios para la documentacion interna del programa.
*/
#include<stdio.h>
int main() {
	//Declaracion
	int arduinos;
	float total, descuento=0;
	//Entrada de datos
	printf("Introduce la cantidad de arduinos: ");
	scanf("%d", &arduinos);
	//Procedimiento
	total=arduinos*350.0;
//condicion
	if (arduinos>9) {
		descuento=total*0.25;
}
else if (arduinos>4) {
		descuento=total*0.15;
}
else {
	descuento=total*0.05;
}
//salida
printf("Subtotal:\t $%10.2f\n", total);
printf("Descuento:\t-$%10.2f\n", descuento);
printf("\t\t--------\n");
printf("Total:\t\t $%10.2f", total-descuento);
	return 0;
}
