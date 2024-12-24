#include <stdio.h>
#include<math.h>
int main()
    {
        int fn;
        int sn;
        printf("Welcome To The CGPIT\n");
        printf("This Is A Basics of Logic Development\n");
        printf("\n !!!! First Number Should Be Grater Than Second Number !!!! \n");
        printf("Enter First Number : - ");
        scanf("%d", &fn );
        printf("\nEnter Second Number : -");
        scanf("%d", &sn);
        printf("\n\tSum of Two Number is             :- %d \n" ,(fn + sn));
        printf("\n\tMultiplication of Two Number is  :- %d \n" ,(fn * sn));
        printf("\n\tDivision of Two Number is        :- %d \n" ,(fn / sn));
        printf("\n\tSubstraction of Two Number is    :- %d \n" ,(fn - sn));
    }