#ifndef AUTOMOBILE_HPP
#define AUTOMOBILE_HPP


#include <string>
#include <iostream>
#include <vector>

namespace automobile {
    
    struct Gps_coordinates{
        int grau;
        int minute;
        double second;
        enum class Cardinal_point{
            N, // North,
            S, // South,
            E, // East,
            W // West
        };
        Cardinal_point cardinal_point; // Membro para armazenar o ponto cardeal
    };

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
            virtual double instantaneous_speed_calculation() = 0;

            virtual Gps_coordinates gps_convert(double latitude, double longitude) = 0;

                // Lat Long (-22.866822, -43.448518)
                // GPS Coordinates 22° 52' 0.5592'' S 43° 26' 54.6648'' W

            
        
        private:
            Color color;
            double velocity;
            double driven;
            //Speed velocity;
            //Velocity veloc;        
        
    };


}

#endif
