#ifndef AUTOMOBILE_HPP
#define AUTOMOBILE_HPP


#include <string>
#include <iostream>
#include <vector>

namespace automobile {
    enum class Color{
        Green,
        Yellow,
        Blue,
        White,
        Red,
        Black,
        Pink,
        Brown,
        Gray,
        Silver
    };
    const std::vector<std::string> Color_str = {"Verde", "Amarelo", "Azul", "Branco", "Vermelho", "Preto", "Rosa", "Marrom", "Cinza", "Prata"};

    class Automobile{
        public:
            Automobile(){};
            //~Automobile(){std::cout << "INFO-Automobile\n";};
            void set_color(Color color);
            std::string get_color();
            void set_max_speed(double velocity);
            double get_max_speed();
            void set_km_driven(double driven);
            double get_km_driven();

            virtual int read_tachometer() = 0;
            // virtual void instantaneous_speed_calculation(std::string encoder) = 0;
        
        private:
            Color color;
            double velocity;
            double driven;
            //Speed velocity;
            //Velocity veloc;        
        
    };


}

#endif
