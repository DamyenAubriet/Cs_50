#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Proto de fonction
int conversion();


int main(void)
{
    //Apelle de la fonction de conversion
    int sous = conversion();
    //Valeur des pieces en entier
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;

    //NB de pieces
    int count = 0;

    //Boucle dite gourmande qui retire le maximum a chaque passage
    while (sous > 0)
    {
        if (sous >= quarters)
        {
            sous -= quarters;
            count++;
        }
        else if (sous >= dimes)
        {
            sous -= dimes;
            count++;
        }
        else if (sous >= nickels)
        {
            sous -= nickels;
            count++;
        }
        else if (sous >= pennies)
        {
            sous -= pennies;
            count++;
        }

    }

    printf("%i\n", count);

}


//Fonction qui retourne la somme convertie en entier
int conversion()
{
    float sommes;
    do
    {
        sommes = get_float("Change owed: ");
    }
    while (sommes < 0);

    int conversion = round((sommes * 100));


    return conversion;
}