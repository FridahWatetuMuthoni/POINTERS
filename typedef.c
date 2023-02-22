#include <stdio.h>

// Typedef gives freedom to the user by allowing them to create their own types
// typedef existing_data_type new_data_type

typedef int INTEGER;

// struct car
// {
//     char engine[50];
//     char fuel_type[10];
//     INTEGER fuel_tank_cap;
//     INTEGER seating_cap;
//     float city_mirage;
// };

typedef struct car
{
    char engine[50];
    char fuel_type[10];
    INTEGER fuel_tank_cap;
    INTEGER seating_cap;
    float city_mirage;
} car;

int main()
{
    // using the INTEGER data type
    INTEGER var = 200;
    printf("%d\n", var);

    // creating a new instance of the car struct
    // struct car car_one;
    car car_one;
    return 0;
}