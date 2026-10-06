#include <stdio.h>

int main()
{
    int current, destination;

    scanf("%d %d", &current, &destination);

    if (destination > current)
    {
        printf("UP");
    }
    else if (destination < current)
    {
        printf("DOWN");
    }
    else
    {
        printf("STAY");
    }

    return 0;
}
