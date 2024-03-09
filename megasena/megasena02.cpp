#include <iostream>
//#include <vector>
#include <cstdlib> // Para a função rand
#include <ctime>   // Para a função time
#include <algorithm> // Para std::sort
#include <iomanip> // Para usar std::setw
#include <set>

int main() {
    size_t number_of_game = 10;
    const int SIZE = 6; // Altere o tamanho conforme necessário

    //std::vector<int> numbers(SIZE);
    std::set<int> numbers;

    // Seed para a função rand baseada no tempo atual
    srand(time(nullptr));
    
    size_t N = 0;
    while(N < number_of_game){
        N++;
        // Preenchendo o vetor com números aleatórios
        while (numbers.size() < SIZE) {
            numbers.insert(rand() % 60 + 1); // Gera um número entre 1 e 60
        }

        // Ordenando o vetor em ordem crescente
        //std::sort(numbers.begin(), numbers.end());

        // Imprimindo os números ordenados
        for (int num : numbers) {
            // Usando setw para garantir que cada número tenha pelo menos 2 caracteres de largura
            std::cout << std::setw(2) << std::setfill('0') << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}