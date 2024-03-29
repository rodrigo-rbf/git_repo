#ifndef CAR_DESCRIPTION_HPP
#define CAR_DESCRIPTION_HPP


#include "automobile.hpp"

namespace automobile {

    class Car_description : public automobile::Automobile{
        public:
            Car_description(){};
            Car_description(automobile::Color color, double velocity = 80.0);
            ~Car_description(){std::cout << "INFO-Car_description\n";};

            int read_tachometer();
            double instantaneous_speed_calculation();
            Gps_coordinates gps_convert(double latitude, double longitude);
        
        private:
            automobile::Color color;
            double velocity;
            double driven;
            //Speed velocity;
            //Velocity veloc;        
        
    };


}

#endif
