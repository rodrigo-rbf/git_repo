#include <cstdlib>
#include <ctime>

#include "car_description.hpp"

 define RAND_MAX = 100;

automobile::Car_description::Car_description(automobile::Color color, double velocity) : 
    color(color),
    velocity(velocity)
{}

int automobile::Car_description::read_tachometer(){
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int random_value = std::rand();
    return random_value;
}