#include<stdio.h>
#include<math.h>
int main(){

    double px, py, qx, qy;
    double distance=0;

    printf("x co-ordinate of p: ");
    scanf("%lf", &px);
    printf("y co-ordinate of p: ");
    scanf("%lf", &py);
    printf("x co-ordinate of q: ");
    scanf("%lf", &qx);
    printf("y co-ordinate of q: ");
    scanf("%lf", &qy);

    distance = sqrt((px-qx)*(px-qx)+(py-qy)*(py-qy));
    printf("The distance between p and q: %f", distance);

    return 0;
}