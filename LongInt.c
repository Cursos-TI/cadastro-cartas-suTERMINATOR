#include <stdio.h>


int main() {
    double numeroPreciso = 3.14159265358979323846;
    long double numeroMuitoPreciso = 3.1415926535897932384626433832795028841971L;

    printf("Numero preciso (double): %.20lf\n", numeroPreciso);
    printf("Numero muito preciso (long double): %.20Lf\n", numeroMuitoPreciso);


    return 0;

}   