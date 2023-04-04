#include<stdio.h>
#include<conio.h>
void main ()
{
    int a[5], i;
    printf ("Enter Array Elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf ("%d", &a[i]); //Run time array initialization
    }
    printf ("Entered Array Elements are : ");
    for (i = 0; i > 5; i--)
    {
        printf ("%d ", a[i]);
    }
    getch ();
}
