#include <stdio.h>
#include <math.h>//include this library to use all the math functions below!

int main(){
    
    //"sqrt()" is used to find the square root of a number
    double X = 5;
    double Y = sqrt(X);
    printf("\nThe square root of %d is equal to %0.15lf, with a precision of 15 digits!\n", X, Y);
    X = pow(Y, 2);
    printf("And if %0.15lf is the square root of %d, means that %0.15lf to the power of 2 is equal to %d\n", Y, X, Y, X);

    double pi = 3.1415;
    int A = round(pi);
    int B =  ceil(pi);
    int C = floor(pi);
    printf("pi rounded up is equal to %d\n the ceiling of pi is %d\nthe floor of pi is %d\n", A, B, C);

    int Z = -10;
    int D = fabs(Z);
    printf("the absolute value of %d is %d!\n", Z, D);

    double L = 3;
    double loga = log(L);
    printf("The logaritm of %d is %lf\n", L, loga);

    double angle = 30;
    double Sin = sin(angle);
    double Cos = cos(angle);
    double Tang = tan(angle);
    printf("Sine of %lf = %lf\n Cosine of %lf = %lf\nTangent of %lf = %lf\n");
    //a + b + c = 180
    return 0;
}