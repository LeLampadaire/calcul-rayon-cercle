#include <stdio.h>
#include <stdlib.h>

int main(){
    float Rayon, Surface, Perimetre;

    printf("Encodez le rayon d'un cercle : ");
    scanf("%f",&Rayon);

    Surface = 3.14159265359 * (Rayon * Rayon);
    printf("\n-> Sa surface vaut : %.2f\n",Surface);

    Perimetre = 2 * 3.14159265359 * Rayon;
    printf("\n-> Son perimetre vaut : %.2f\n",Perimetre);

    return 0;
}
