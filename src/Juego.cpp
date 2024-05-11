#include "Juego.hpp"
#include <iostream>

Juego::Juego(const std::string& palabra) : palabraSecreta(palabra), intentosRestantes(6) {}

void Juego::iniciar() {
    std::cout << "Bienvenido al juego del Ahorcado!" << std::endl;
    std::cout << "La palabra tiene " << palabraSecreta.obtenerPalabraOculta().size() << " letras." << std::endl;
}

void Juego::jugar() {
    char letra;
    while (!palabraSecreta.estaCompleta() && intentosRestantes > 0) {
        std::cout << "Intentos restantes: " << intentosRestantes << std::endl;
        std::cout << "Palabra: " << palabraSecreta.obtenerPalabraOculta() << std::endl;
        std::cout << "Ingresa una letra: ";
        std::cin >> letra;

        if (!palabraSecreta.adivinarLetra(letra)) {
            std::cout << "¡Incorrecto! La letra '" << letra << "' no está en la palabra." << std::endl;
            intentosRestantes--;
        } else {
            std::cout << "¡Correcto! La letra '" << letra << "' está en la palabra." << std::endl;
        }
    }

    if (palabraSecreta.estaCompleta()) {
        std::cout << "¡Felicidades! Has adivinado la palabra: " << palabraSecreta.obtenerPalabraOculta() << std::endl;
    } else {
        std::cout << "¡Oh no! Te has quedado sin intentos. La palabra era: " << palabraSecreta.obtenerPalabra() << std::endl;
    }
}
