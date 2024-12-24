#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int choice;


void main(){
    main:
    printf("\t\t***************** Math Hero *****************");
    printf("\t\t\n1.  Intrest Count");
    printf("\t\t\n2.  Find Area");
    printf("\t\t\n3.  Exit");
    printf("\n\n\t Your Choice :-\t");
    scanf("%d",&choice);
    fgetc(stdin);

    switch (choice)
    {
    case 1:
        goto intrest;
        break;
    case 2:
        goto findArea;
        break;
    case 3:
        printf("\t\t\t\n\n Thank You ! Visit Again \n\n\n");
        break;

    default:
        printf("\t\t\n\n Please Choose Valid Option\n\n");
        goto main;
        break;
        return;

float radius;
float lenght;
float height;
float width;
int opt;

int PrimaryAmount;
float intrest;
float duration;
float NewAmount;
float intrestam;

intrest : 
printf("\t\n\n*************** My Intrest.com ***************");
printf("\t\n Principle Amount :-");
scanf("%d", &PrimaryAmount);
printf("\t\n Intrest (In Percentage) :-");
scanf("%f", &intrest);
printf("\t\n Duration(In Year) :-");
scanf("%f", &duration);
printf("\t\n Intrest Amount :- %f \n ", ((intrest / 100) * PrimaryAmount * duration));
printf("\t\n Payable Amount (Including Intrest):- %f \n ", ((intrest / 100) * PrimaryAmount * duration) + PrimaryAmount);
printf("\t\t\t\n\n Thank You ! Visit Again \n\n\n");
goto main;
findArea : 
printf("\t============ FIND AREA.COM ============\t");
printf("\n\nSelect Shape For Find Area ?");
printf("\n\n1. Square");
printf("\n2. Circle");
printf("\n3. Rectangle");
printf("\n4. Triangle");
printf("\n5. Half-Circle");
printf("\n6. Ellipse");
printf("\n7. Exit");
printf("\n\nYour choice:\t");
scanf("%d", &opt);
fgetc(stdin);
switch (opt)
{
case 1:
    printf("\nEnter Lenght :- ");
    scanf("%f", &lenght);
    printf("Area of Square is : %f \n", lenght * lenght);
    goto findArea;
    break;
case 2:
    printf("\nEnter Radius :- ");
    scanf("%f", &radius);
    printf("Area of Circle is: %f \n", 3.14 * radius * radius);
    printf("\n\t\t (: Thank You Visit Again :)\n\n");
    goto findArea;
    break;
case 3:
    printf("\nEnter Lenght :- ");
    scanf("%f", &lenght);
    printf("Enter Width :-");
    scanf("%f", &width);
    printf("Area of Rectangle is :- %f \n", width * lenght);
    printf("\n\t\t (: Thank You Visit Again :)\n\n");
    goto findArea;
    break;
case 4:
    printf("\nEnter Height :- ");
    scanf("%f", &height);
    printf("Enter Width :- ");
    scanf("%f", &width);
    printf("Area of Triangle is :- %f \n ", (width * height) / 2);
    printf("\n\t\t (: Thank You Visit Again :)\n\n");
    goto findArea;
    break;
case 5:
    printf("\nEnter Radius :- ");
    scanf("%f", &radius);
    printf("Area of Circle is: %f \n", (3.14 * radius * radius) / 2);
    printf("\n\t\t (: Thank You Visit Again :)\n\n");
    goto findArea;
    break;
case 6:
    printf("\nEnter Height  :-  ");
    scanf("%f", &height);
    printf("\nEnter Width  :-  ");
    scanf("%f", &width);
    printf("Area of Ellipse is :- %f \n", 3.14 * height * width);
    printf("\n\t\t (: Thank You Visit Again :)\n\n");
    goto findArea;
    break;

case 7:
    printf("\n\t\t (: Thank You Visit Again :)\n\n");
    goto main;
    break;
default:
    printf("\n\n\tSorry invalid option\n\n");
    break;
        }
}
    }