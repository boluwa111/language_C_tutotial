#include <stdio.h>

#include <math.h>
/* My first code on language C
this is a code that take the opposite and adjacent
 of aright angle triangle then output the hypotenuse
 */

int main()
{   float a;
    float b;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("The value of c is %f",sqrt(a*a+b*b));


    return 0;
}
