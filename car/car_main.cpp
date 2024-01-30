// Utiliza a classe carro

#include "car_description.hpp"

int main(int argc, char** argv){
    
    car::Car_description car_r(car::Color::Red, 120.0);
    car::Car_description car_b, car_y;
    car_b.set_color(car::Color::Blue);
    car_y.set_color(car::Color::Yellow);

    std::cout << "Carro 01:" << car_b.get_color() << '\n';
    std::cout << "Carro 02:" << car_y.get_color() << '\n';

    return 0;
}
