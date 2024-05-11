#include "PalabraSecreta.hpp"
#include <algorithm>

PalabraSecreta::PalabraSecreta(const std::string& palabra) : palabra(palabra) {
    letrasAdivinadas.resize(palabra.size(), '_'); 
}

bool PalabraSecreta::adivinarLetra(char letra) {
    bool acierto = false;
    for (size_t i = 0; i < palabra.size(); ++i) {
        if (palabra[i] == letra) {
            letrasAdivinadas[i] = letra;
            acierto = true;
        }
    }
    return acierto;
}

bool PalabraSecreta::estaCompleta() const {
    return letrasAdivinadas == palabra; 
}

std::string PalabraSecreta::obtenerPalabraOculta() const {
    return std::string(letrasAdivinadas.begin(), letrasAdivinadas.end()); 
}

void PalabraSecreta::reiniciar() {
    std::fill(letrasAdivinadas.begin(), letrasAdivinadas.end(), '_'); 
}
