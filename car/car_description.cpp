#include "car_description.hpp"


car::Car_description::Car_description(car::Color color, double velocity) : 
    color(color),
    velocity(velocity)
{}

void car::Car_description::set_color(car::Color color){
    this->color = color;
}


std::string car::Car_description::get_color(){
    return car::Color_str[size_t(color)];
}

void car::Car_description::set_max_speed(double velocity){
    this->velocity = velocity;
}

double car::Car_description::get_max_speed(){
    return velocity;
}