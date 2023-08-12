#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Year_Start = 0;
    int Year_End = 0;
    float Result_Born = 0.0;
    float Result_Dead = 0.0;
    int Year_Stimation = 0.0;

    // TODO: Prompt for start size
    do
    {

        Year_Start = get_int("Digite el numero de la poblacion inical: \n");
    }
    while (Year_Start < 9);

    // TODO: Prompt for end size
    do
    {

        Year_End = get_int("Digite el numero final a llegar de la poblacion: \n");
    }
    while (Year_End < Year_Start);

    // TODO: Calculate number of years until we reach threshold
    // CALCULATE YEAR WHITH A FOR

    // for (Year_Stimation = 0;Year_Start < Year_End; Year_Stimation ++)
    // {
    //       Result_Born = Year_Start / 3;
    //       Result_Dead = Year_Start / 4;
    //       Year_Start = Year_Start + Result_Born - Result_Dead;

    // }

    // CALCULATE YEAR WHITH A WHILE

    while (Year_Start < Year_End)
    {
        Result_Born = Year_Start / 3;
        Result_Dead = Year_Start / 4;
        Year_Start = Year_Start + Result_Born - Result_Dead;
        Year_Stimation++;
    }

    // TODO: Print number of years

    printf("Years: %d", Year_Stimation);
}
