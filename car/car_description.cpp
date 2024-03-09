#include <cstdlib>
#include <ctime>
#include <cmath>

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

automobile::Gps_coordinates automobile::Car_description::gps_convert(double latitude, double longitude)
{
    automobile::Gps_coordinates coordinate_lat;
    double decimal_part;

    coordinate_lat.grau = std::round<int>(latitude);
    decimal_part = (latitude - coordinate_lat.grau) * 60;
    coordinate_lat.minute = std::round<int>(decimal_part);
    coordinate_lat.second = (decimal_part - coordinate_lat.minute) * 60;
    
    std::cout << "coordinate.grau: " << coordinate_lat.grau << std::endl;
    std::cout << "coordinate.minute: " << coordinate_lat.minute << std::endl;
    std::cout << "coordinate.second: " << coordinate_lat.second << std::endl;
    
    return coordinate_lat;
}

// Lat Long (-22.866822, -43.448518)
                // GPS Coordinates 22° 52' 0.5592'' S 43° 26' 54.6648'' W

