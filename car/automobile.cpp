#include "automobile.hpp"


void automobile::Automobile::set_color(Color color){
    this->color = color;
}


std::string automobile::Automobile::get_color(){
    return automobile::Color_str[size_t(color)];
}

void automobile::Automobile::set_max_speed(double velocity){
    this->velocity = velocity;
}

double automobile::Automobile::get_max_speed(){
    return velocity;
}

void automobile::Automobile::set_km_driven(double driven){
    this->driven = driven;
}

double automobile::Automobile::get_km_driven(){
    return driven;
}

