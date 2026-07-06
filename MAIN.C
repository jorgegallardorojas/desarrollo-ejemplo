#include <stdio.h>

int main() {
    printf("Hola, GitHub desde C!\n");
    printf("hola jorge gallardo rojas \n");

    //Aquí he comentado yo José Manuel Zamudio Hernández. 
    //Insertaré un saludo y un pequeño circuito 
    printf("Hola soy tu compañero de claser!\n");
    printf("Este es un pequeño circuito de ejemplo...\n");
    printf("Quieres probar este circuito?  \n");
    char response[10];
    scanf("%s", response);
    if (strcmp(response, "Si") == 0 || strcmp(response, "si") == 0) {
        printf("¡Genial! Vamos a probarlo.\n");
        printf("   +---+   \n");
        printf("   |   |   \n"); 
        printf("   |   |   \n");
        printf("   +---+   \n");  
    } else {
        printf("Está bien, tal vez en otra ocasión.\n");
    }
    return 0;
}