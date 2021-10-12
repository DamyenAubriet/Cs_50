#include <stdio.h>
#include <cs50.h>

//Hard
int main(void)
{
    int taille;

    do
    {
        taille = get_int("Entrée une taille: ");
    }
    while ((taille < 1) || (taille > 8));
    //LOOP

    for (int i = 1; i <= taille; i++)
    {
        for (int h = 0; h < taille - i; h++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {

            printf("#");
        }
        //loop
        printf("\n");
    }

}