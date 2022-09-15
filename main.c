#include <stdio.h>
#include <stdbool.h>

//Ohjelma tulostaa käyttäjän antaman luvun mukaisen
// kymmenen kertotaulun

int numberInput;
int multiplier;

int main()
{
    printf("Luku, jonka kymmenen kertotaulun haluat: ");
    scanf("%d",&numberInput);
    for(multiplier=1;multiplier<11;multiplier++){
        printf("\n%d*%d=%d",numberInput,multiplier,(numberInput*multiplier));
    }
    printf("\n");

    return 0;
}
