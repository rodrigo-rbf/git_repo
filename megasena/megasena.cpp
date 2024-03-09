#include <time.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <random>
#include <iomanip> // Para usar std::setw


int main (){
    size_t number_of_game = 10;
    size_t qty_number = 6;
    size_t number_select[qty_number];
    size_t first_number = 1;
    size_t last_number = 60;

    size_t N = 0;
    // Inicializa cronometro para obter números aleatórios.
    srand(time(nullptr));
    while(N<10){
        N++;
        for(size_t i = 0 ; i < qty_number ; i++){
            number_select[i] = ((rand() % last_number) + first_number);
            for(size_t j = 0 ; j < i ; j++){
                if(number_select[j] == number_select[i]){
                    i--;
                    break;
                }
            }
        }

        for(size_t i = 0 ; i < qty_number -1 ; i++){
            for(size_t j = i+1 ; j < qty_number; j++){
                if(number_select[j] < number_select[i]){
                    size_t temp = number_select[i];
                    number_select[i] = number_select[j];
                    number_select[j] = temp;
                }
            }
        }

        for (size_t i = 0 ; i < qty_number ; i++ ){
            // Usando setw para garantir que cada número tenha pelo menos 2 caracteres de largura
            std::cout << std::setw(2) << std::setfill('0') << number_select[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}