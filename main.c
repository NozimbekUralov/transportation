#include <stdio.h>

int main(){
    typedef struct{
        int number;
        float speed;
        float distance;
    }Bus;

    Bus bus1 = {60, 70, 10};

    printf("%.f minut", (bus1.distance/bus1.speed)*60);
    return 0;
}