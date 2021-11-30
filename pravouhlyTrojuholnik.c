#include <stdio.h>

int main (void)
{
int strana1;
printf ("Zadaj prvu stranu: ");
scanf ("%i", &strana1);

int strana2;
printf ("Zadaj druhu stranu: ");
scanf ("%i", &strana2);

int strana3;
printf ("Zadaj tretiu stranu: ");
scanf ("%i", &strana3);

int pokus1 = strana1*strana1==strana2*strana2+strana3*strana3;
int pokus2 = strana3*strana3==strana1*strana1+strana2*strana2;
int pokus3 = strana2*strana2==strana1*strana1+strana3*strana3;

if (pokus1 || pokus2 || pokus3 == 1)
printf ("True\n");

else
printf ("False\n");

}