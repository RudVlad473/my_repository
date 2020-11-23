#include <stdio.h>
#include <math.h>
int main(void)
{
    short n;       
    double x, y;   
    short h;       

    for (n = 0; n < 5; n++)
    {
        printf("|   x   |      y     |\n");
        printf("|-------|------------|\n");
        for (x = 0; x < 4; x += 0.25) 
        {
            if (x < 1) y = 0;
            else if (x < 2) y = -sqrt(1 - (x - 2) * (x - 2));
            else if (x < 3) y = -1;
            else if (x < 4) y = -sqrt(1 - (x - 3) * (x - 3));
            printf("| %5.2lf | %10.7lf |", x + n * 4, y);
            h = (y + 1) * 10;
            if (y - 1 - h * 10 > 0.5) h++;
            for (; h > 0; h--) printf(" ");
            printf("*\n");
        } 
    } 
}
