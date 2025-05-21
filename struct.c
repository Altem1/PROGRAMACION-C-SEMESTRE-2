#include <stdio.h>
#include <stdlib.h>

void selecciones(int *seleccion);
void funciones(int seleccion);
void Agregar_producto();
void Mostrar_t_prod();
void Search_prod_by_id();
void Modificar_prod();
void Eliminar_prod();

struct Producto{
    
    int ID;
    char nombre[100];
    float precio;
    int stock;

};
#pragma pack(pop)

int main(){

    int seleccion;
    
    do{
      
        selecciones(&seleccion);
        funciones(seleccion);

    } while (seleccion != 6);
    

    return 0;
}

void selecciones(int *seleccion){

    printf("Selecciona una opcion: \n");
    printf("1.- Agregar un producto \n2.- Mostrar todos los productos \n3-. Buscar un producto por ID \n4.- Modificar un producto \n5.- Eliminar un producto\n");
    scanf("%d", seleccion);

}

void funciones(int seleccion){

        switch (seleccion){
        case 1:
            Agregar_producto();
            break;
        
        case 2:
            Mostrar_t_prod();
            break;

        case 3:
            Search_prod_by_id();
            break;

        case 4:
            Modificar_prod();
            break;

        case 5:
            Eliminar_prod();
            break;

        default:
            printf("Opcion no valida \n\n");
            break;
    }

}

void Agregar_producto() {
    FILE *archivo = fopen("datos.bin", "ab");
    if(archivo==NULL){
        printf("Error al abrir el archivo\n");
        return;
    }

    struct Producto P;
    printf("Ingresa el ID: ");
    scanf("%d", &P.ID);
    getchar();
    scanf("%99[^\n]", P.nombre);
    printf("Ingresa el precio: ");
    scanf("%f", &P.precio);
    printf("Ingresa la cantidad disponible: ");
    scanf("%d", &P.stock);

    fwrite(&P, sizeof(struct Producto), 1, archivo);
    fclose(archivo);
    printf("Producto agregado. \n");
    
}

void Mostrar_t_prod() {
    FILE *archivo = fopen("datos.bin", "rb");
    if (archivo == NULL) {
        printf("No hay productos registrados.\n");
        return;
    }

    struct Producto P;
    printf("\n--- LISTA DE PRODUCTOS ---\n");
    while (fread(&P, sizeof(struct Producto), 1, archivo) == 1) {
        printf("ID: %d \t| Nombre: %-20s \t| Precio: $%.2f \t| Stock: %d\n",
               P.ID, P.nombre, P.precio, P.stock);
    }
    fclose(archivo);
}

void Search_prod_by_id() {
    // Código para buscar un producto por ID
    printf("Función Search_prod_by_id() llamada.\n");
}

void Modificar_prod() {
    // Código para modificar un producto
    printf("Función Modificar_prod() llamada.\n");
}

void Eliminar_prod() {
    // Código para eliminar un producto
    printf("Función Eliminar_prod() llamada.\n");
}