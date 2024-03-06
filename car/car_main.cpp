// Utiliza a classe carro

#include "automobile.hpp"
#include "car_description.hpp"

int main(int argc, char** argv){
    
    automobile::Car_description car_r(automobile::Color::Red, 120.0);
    automobile::Car_description car_b, car_y;
    car_b.set_color(automobile::Color::Blue);
    car_y.set_color(automobile::Color::Yellow);

    std::cout << "Carro 01:" << car_b.get_color() << '\n';
    std::cout << "Carro 02:" << car_y.get_color() << '\n';
    std::cout << "Carro 03:" << car_r.get_color() << '\n';
    std::cout << "Velocidade instantanea do Carro 03 RED " << car_r.instantaneous_speed_calculation() << "km/h\n";

    return 0;
}
