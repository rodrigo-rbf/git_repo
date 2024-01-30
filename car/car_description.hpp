#ifndef CAR_DESCRIPTION_HPP
#define CAR_DESCRIPTION_HPP


#include <string>
#include <iostream>
#include <vector>

namespace car {
    enum class Color{
        Green,
        Yellow,
        Blue,
        White,
        Red,
        Black,
        Pink,
        Brown
    };
    const std::vector<std::string> Color_str = {"Verde", "Amarelo", "Azul", "Branco", "Vermelho", "Preto", "Rosa", "Marrom"};

    class Car_description{
        public:
            Car_description(){};
            Car_description(Color color, double velocity = 80.0);
            ~Car_description(){std::cout << "INFO\n";};
            void set_color(Color color);
            std::string get_color();
            void set_max_speed(double velocity);
            double get_max_speed();
        
        private:
            Color color;
            double velocity;
            //Speed velocity;
            //Velocity veloc;        
        
    };


}

#endif
