#include "car_description.hpp"


automobile::Car_description::Car_description(automobile::Color color, double velocity) : 
    color(color),
    velocity(velocity)
{}

int automobile::Car_description::read_tachometer(){
    // realiza a leitura do instrumento específico
    return 0;
}