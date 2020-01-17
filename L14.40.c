/* 40.c
Programmas autors: A.  Filipovs
Programma veidota 2020 gada 05 janvaris

Masiva kartosana */

#include <stdio.h>
int main()
{
 int i, j, k; // ciklu mainigie
 int Temp; // islaicigais mainigais
 int mas3[] = {2, 5, 3, 7, 0}; // kartojamo skaitlju masivs
 printf ("Masiva izmers = %d\n", sizeof(mas3)/ sizeof(int));

 for (i=0; i<5; i++) // cikliska masiva kartosana
{
 for (j=0; j<(5-1); j++) // nakosais cikls
{
 if (mas3[j] > mas3[j+1])
{
 Temp = mas3[j];
 mas3[j] = mas3[j+1];
 mas3[j+1] = Temp;
}
}
}
 // sakartota masiva izvade uz ekrana
 for(k=0; k<5; k++)
 printf("%d,",mas3[k]);
 printf("\n");
}
