#include <cstdlib>
#include <ctime>

#include "car_description.hpp"


automobile::Car_description::Car_description(automobile::Color color, double velocity) : 
    color(color),
    velocity(velocity)
{}

int automobile::Car_description::read_tachometer(){
    
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int random_value = std::rand()%100;
    return random_value;
}

double automobile::Car_description::instantaneous_speed_calculation(){
    int dt = automobile::Car_description::read_tachometer();
    double ds = 1.5; 
    double veloc = ds/dt*1000;
    return veloc;
}

automobile::Gps_coordinates automobile::Car_description::gps_convert(double latitude, double longitude){
    automobile::Gps_coordinates coordinate;
    coordinate.grau = 23;
    coordinate.minute = 52;
    coordinate.second = 0.5298;
    coordinate.cardinal_point = automobile::Gps_coordinates::Cardinal_point::N;

    return coordinate;
}
