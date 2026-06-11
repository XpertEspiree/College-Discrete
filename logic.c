#include <stdio.h>

int main()
{
    int P, Q;

    printf("Truth Table for Logical Operators\n\n");
    printf("P\tQ\tPANDQ\tPORQ\tNOTP\tNOTQ\tP->Q\tP<->Q\n");
    printf("--------------------------------------------------------------\n");

    for (P = 0; P <= 1; P++)
    {
        for (Q = 0; Q <= 1; Q++)
        {
            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
                   P, Q,
                   P && Q,
                   P || Q,
                   !P,
                   !Q,
                   (!P || Q),
                   (P == Q));
        }
    }

    return 0;
}
