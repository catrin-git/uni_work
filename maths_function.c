#include <stdio.h>
int main()
{
int a = 1;
int b = 2;
int c,d,e,f;

printf("%i\n", a+b);
printf("%i\n", b-a);
printf("%i\n", a*b);
printf("%i\n", b/a);

printf("Enter in 4 Numbers:\n");
scanf("%i %i %i %i", &c,&d,&e,&f);
printf("\n %i is the average\n", (c+d+e+f)/4);
}

