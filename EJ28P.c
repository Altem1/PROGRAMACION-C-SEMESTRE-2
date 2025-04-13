#include <stdio.h> //Libreria de entrada y salida
#include <stdlib.h> //Libreria estandar de C para uso de system
#include <locale.h> //Libreria para la acentuacioón
#include <math.h> // Libreria para operaciones, No es necesaria pero la pide
int MAX = 100; //Variable global ya que no conocemos el max de entradas al declarar el array

int main(){ 
    setlocale(LC_ALL, "spanish"); //Definimos a la libreria que se ingresaran caracteres especiales del español
    int n, ciclo; //se declaran variables
    float suma; //se declara la variable para la suma
    char nombre[50]; //se le da un maximo de 50 caracteres al nombres
    float calificaciones[MAX]; //se declara el array que almacena las calificaciones

    do{ //se usa do ya que lo hace una vez y al final queremos preguntar si el usuario quiere ingresar mas datos
        suma=0; //se le da el valor de 0 para que en siguientes iteraciones no guarde datos basura
        printf("Ingresa el nombre del alumno: "); //pedimos el nombre
        scanf("%49s", nombre); //guardamos el nombre el & es indistinto ya que se pone como puntero
    
        printf("Cuantas calificaciones ingresaras: "); //pedimos la cantidad de calificaciones a ingresar
        scanf("%d", &n); //leemos
    
        printf("Ingresa las %d calificacion del alumno %s \n", n, nombre); //le decimos al usuario que pediremos y de quien
        for(int i=0; i<n; i++){ //se inicia en 0 ya que recordemos que los array inician en 0, y terminamos en n-1 o i<n es lo mismo
    
            printf("Ingresa la calificacion %d: ", i+1);//al iniciar i en 0 le tenemos que sumar 1
            scanf("%f", &calificaciones[i]); //leemos la calificaciones y lo guardamos en el valor del indice (i) 
            suma=suma+calificaciones[i]; //hacemos sumas consecutivas dentro del for para aprovechar el valor de indice otra sintaxis es suma+=calificaciones[i]
        }
    
        printf("\nEl promedio del alumno %s es de: %.2f \n", nombre, suma/n); //calculamos el promedio dentro del printf para evitar usar otra variable queda a consideraion de la estupides ¡?

        printf("Quieres ingresa mas informacion? \nIngresa 1-Si 2-No::: "); //pregutamos si quiere seguir ingresando datos
        scanf("%d", &ciclo); //leemos el valor 1 para si, 2 para no

        if(ciclo==1){ //si quiere ingresar mas entonces limpiamos la consola
            system("clear"); //system("cls") para windows, este sistema es linux
        }//si no entonces no limpia
    }while(ciclo==1);//el ciclo solo seguira si se ingresa 1, cualquier otro numero, letra o enter hara que termine

    printf("\nIDK Despedida???\n");//la despedida idk?, para????????????

    return 0; //le decimos a la consola que el programa a terminado satisfactoriamente 
}