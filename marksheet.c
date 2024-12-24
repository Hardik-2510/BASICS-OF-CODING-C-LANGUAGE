#include <stdio.h>

int main()

{
    // Declare Variables
    char nos;
    char sd;
    int sid;
    int mat, guj, ss, sci, eng, tm;
    float pr;
    char gr;
    // Collect Students Details
    printf("\n\t\t Welcome To The Result Maker Only For 10th Standard !!");
    printf("\n\n\tName Of Student:-\t");
    scanf("%c", &nos);
    printf("\n\tStudent ID :-\t");
    scanf("%c", &sid);
    // Collect Students Marks
    printf("------------------------------------------------------------------------------------");
    printf("\nEnter Subject Marks Maths , Gujarati , Social Science , Science , English Out Of 100\n");
    printf("\nEnter  Maths Marks:-\t");
    scanf("%d", &mat);
    printf("\nEnter Gujarati Marks      :-\t");
    scanf("%d", &guj);
    printf("\nEnter Social Science Marks:-\t");
    scanf("%d", &ss);
    printf("\nEnten Science Marks       :-\t");
    scanf("%d", &sci);
    printf("\nEnter English Marks       :-\t");
    scanf("%d", &eng);
    // Total Marks Calculation , Pr Calculation
    tm = mat + guj + ss + sci + eng;
    pr = (tm / 500) * 100;

    // Result
    printf("\n------------------------------------------------------------------------------------");
    printf("\nGujarat Secondary & Higher Secondary Education Board , Gandhinagar");
    printf("\n                       Examination Wing , Surat                   ");
    printf("\n                          Statement Of Marks                      ");
    printf("\n------------------------------------------------------------------------------------");
    printf("\n");
    printf("\nStudent Name :-%c", nos);
    printf("\nStudent ID   :-%d", sid);
    printf("\n------------------------------------------------------------------------------------");
    printf("\nSr No. | Subject          | Total Marks | Obtained ");
    printf("\n--------------------------------------------------------");
    printf("\n  01   |      Maths       |     100     |     %d   ", mat);
    printf("\n  02   |      Gujarati    |     100     |     %d   ", guj);
    printf("\n  03   |  Social Science  |     100     |     %d   ", ss);
    printf("\n  04   |      Science     |     100     |     %d   ", sci);
    printf("\n  05   |      English     |     100     |     %d   ", eng);
    printf("\n--------------------------------------------------------");
    printf("\n   Total Of All Subjects  |     500     |     %d   ", tm);
    printf("\n--------------------------------------------------------");
    printf("\n\n");
    printf("\n |    Percentile  |        %0.02f      |\n\t", pr);
}