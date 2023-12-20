#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startSize;
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // TODO: Prompt for end size
    int endSize;
    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    if (startSize != endSize)
    {
        do
        {
            //printf("years: %i\n",years);
            int birth = startSize / 3;
            //printf("birth: %i\n",birth);
            int death = startSize / 4;
            //printf("death: %i\n",death);
            startSize = startSize + birth - death;
            //printf("startSize: %i\n",startSize);
            years++;
        }
        while (startSize < endSize);
    }

    // TODO: Print number of years
    printf("Years: %i",years);
}