#include <stdio.h>

void increment(int *a_pointer)
{
    *a_pointer = *a_pointer + 15;
}

void go_south_east(int *lat, int *lon)
{
    printf("Latitide: %p\n", lat);
    printf("Longitude: %p\n", lon);
    // decrease latitude
    *lat = *lat - 1; // here the new value is coppied at lon not at longitude
    // increase the longititude
    *lon = *lon + 1;
}

int main()
{
    // INTERGERS
    int a = 10;
    int *a_pointer = &a;
    increment(a_pointer);
    printf("%d\n", a);

    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);
    printf("Avast Now at:[%d,%d]\n", latitude, longitude);

    return 0;
}