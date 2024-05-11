#ifndef PALABRASECRETA_HPP
#define PALABRASECRETA_HPP

#include <string>
#include <vector>

class PalabraSecreta {
private:
    std::string palabra;
    std::vector<char> letrasAdivinadas;

public:
    PalabraSecreta(const std::string& palabra);
    bool adivinarLetra(char letra);
    bool estaCompleta() const;
    std::string obtenerPalabraOculta() const;
    void reiniciar();
};

#endif 
