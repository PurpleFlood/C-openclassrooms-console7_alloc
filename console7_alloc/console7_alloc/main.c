//
//  main.c
//  console7_alloc
//
//  Created by asap on 15/04/2024.
//

#include <stdio.h>
#include <stdlib.h>
void* malloc(size_t nombreOctectNecessaire);
void free (void* pointeur);

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};


int main(int argc, const char * argv[]) {
    
    /*int* memoireAlloue= NULL;
    memoireAlloue=malloc(sizeof(int));

    if (memoireAlloue == NULL){
        exit(0);
    }
    
    printf("Quel âge avez vous ? ");
    scanf("%d", memoireAlloue);
    printf("Vous avez %d ans.\n", *memoireAlloue);
    
    free(memoireAlloue);
    */
    
    int* ageAmis=NULL;
    int nombreDAmis=0, i=0;
    
    printf("Combien d'amis avez-vous ?");
    scanf("%d", &nombreDAmis);
    
    if (nombreDAmis > 0) // Il faut qu'il ait au moins un ami (je le plains un peu sinon :p)
    {
        ageAmis = malloc(nombreDAmis * sizeof(int)); // On alloue de la mémoire pour le tableau
        if (ageAmis == NULL) // On vérifie si l'allocation a marché ou non
        {
            exit(0); // On arrête tout
        }

        // On demande l'âge des amis un à un
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("Quel age a l'ami numero %d ? ", i + 1);
            scanf("%d", &ageAmis[i]);
        }

            // On affiche les âges stockés un à un
        printf("\n\nVos amis ont les ages suivants :\n");
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("%d ans\n", ageAmis[i]);
        }

            // On libère la mémoire allouée avec malloc, on n'en a plus besoin
        free(ageAmis);
    }
    
    
    
    
    //printf("Mémoire alloué : %d\n", memoireAlloue);
    /*
    printf("Coordonées : %d\n", sizeof(Coordonnees));
    printf("char: %d octects\n", sizeof(char));
    printf("int: %d octects\n", sizeof(int));
    printf("long: %d octects\n", sizeof(long));
    printf("double: %d octects\n", sizeof(double));
    */
    return 0;
}
