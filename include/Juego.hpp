#ifndef JUEGO_HPP
#define JUEGO_HPP

#include "PalabraSecreta.hpp"

class Juego {
private:
    PalabraSecreta palabraSecreta;
    int intentosRestantes;

public:
    Juego(const std::string& palabra);
    void iniciar();
    void jugar();
};

#endif 
