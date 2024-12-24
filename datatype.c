#include <stdio.h>
int main()
{
    char name;
    int num;
    double numb;
    float deci;
    printf("\nEnter Character :-\t");
    scanf("%c", &name);

    printf("\nEnter Number :-\t");
    scanf("%d", &num);

    printf("\nEnter Double :-\t");
    scanf("%lf", &numb);

    printf("\nEnter Float :-\t");
    scanf("%f", &deci);

    printf("\nYou Have Enterd Character Is :-\t\n%c", name);
    printf("\nYou Have Enterd Number Is :-\t\n%d", num);
    printf("\nYou Have Enterd Character Is :-\t\n%lf", numb);
    printf("\nYou Have Enterd Float Is :-\t\n%f", deci);
}