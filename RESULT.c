#include <stdio.h>
void main()
{
    int em;
    int ep;
    int bld;
    float tm;
    float cg;
    printf("Welcome To The CGPIT !!\n");
    printf("Marking Of The CGPIT !!\n");
    printf("Enter Three Subjects Marks in 100 out of !!\n");
    printf("Enter The Marks Of Engineering Maths:-");
    scanf("%d", &em);

    printf("\nEnter The Marks Of Engineering Physics:-");
    scanf("%d", &ep);

    printf("\nEnter The Marks Of Basics Of Logic development:-");
    scanf("%d", &bld);

    tm = (em + ep + bld);
    cg = (tm / 300) * 10;
    if (cg > 3.3)
    {
        printf("\t\t\nCongrats !! You Have Passed !! \n Your Score is %0.1f Out of 10\n\n", cg);
    }
    else
    {
        printf("\t\t\nBetter Luck Next Time !!\n\t Your Score Is %0.1f Out of 10\n\n", cg);
    }
}