#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float radius;
float lenght;
float height;
float width;
int opt;
float main()
{
    
    
    
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
            break;
        case 2:
            printf("\nEnter Radius :- ");
            scanf("%f", &radius);
            printf("Area of Circle is: %f \n", 3.14 * radius * radius);
            printf("\n\t\t (: Thank You Visit Again :)\n\n");
            break;
        case 3:
            printf("\nEnter Lenght :- ");
            scanf("%f", &lenght);
            printf("Enter Width :-");
            scanf("%f", &width);
            printf("Area of Rectangle is :- %f \n", width * lenght);
            printf("\n\t\t (: Thank You Visit Again :)\n\n");
            break;
        case 4:
            printf("\nEnter Height :- ");
            scanf("%f", &height);
            printf("Enter Width :- ");
            scanf("%f", &width);
            printf("Area of Triangle is :- %f \n ", (width * height) / 2);
            printf("\n\t\t (: Thank You Visit Again :)\n\n");
            break;
        case 5:
            printf("\nEnter Radius :- ");
            scanf("%f", &radius);
            printf("Area of Circle is: %f \n", (3.14 * radius * radius) / 2);
            printf("\n\t\t (: Thank You Visit Again :)\n\n");
            break;
        case 6:
            printf("\nEnter Height  :-  ");
            scanf("%f", &height);
            printf("\nEnter Width  :-  ");
            scanf("%f", &width);
            printf("Area of Ellipse is :- %f \n", 3.14 * height * width);
            printf("\n\t\t (: Thank You Visit Again :)\n\n");
            break;

        case 7:
            printf("\n\t\t (: Thank You Visit Again :)\n\n");
            break;
        default:
            printf("\n\n\tSorry invalid option\n\n");
            break;
            return 0;
    }
}