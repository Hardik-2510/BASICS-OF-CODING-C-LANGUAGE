#include <stdio.h>
#include<math.h>
int main()
{
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e;

    // don't use variable before the declation

    int oldage = 22;
    int newage = oldage + years;
    int years = 2;

    // multiple variable declation

    int a = b = c = 3;

    // arithmetic instructor
    int a = 2;
    int b = 3;
    int sum = a + b;
    int multiplication = a * b;
    int x, y = a * b;

    //error in arithmatic

    int b + c = a;
    int a = bc;
    int a = b ^ c;
    int power = b ^ c;
    printf("%d", power);

    // moduler operator

    int h = 4;
    int k = 2;
    printf("%d", h % k);

    /*
    type conversion
    int op int --> int
    4   *  2   --> 8
    int op float --> float
    2.0  *  2    --> 4.0
    float op float --> float
    4.5    *  10   --> 45

    perfect value  gotten by float
    */
    // operator precedence
/*
  * --> / --> %
  + -->  -
  =
*/
}