#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;

    k=10;
    while (k>0)
    {
        k--;
        sum+=k; //use something different in "while" version
    }
    printf ("Sum - %d\n",sum);


    for (k=10;k>0;k--) {
         //use something different in "for" version
        printf ("%d\n", k);
    }
        printf ("Blast off!");
}

