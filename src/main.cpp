#include <iostream>
#include <vector>

void dibujarAhorcado(int fallos) {
    std::vector<std::string> partes = {
        "  O",      
        " /", "|", "\\" ,  
        " /", "\\"    
    };

    std::cout << "---------" << std::endl;
    std::cout << "|       |" << std::endl;
    
    for (int i = 0; i < fallos && i < partes.size(); ++i) {
        std::cout << "|" << partes[i] << std::endl;
    }

    
    for (int i = fallos; i < partes.size(); ++i) {
        std::cout << "|" << std::endl;
    }

    std::cout << "|" << std::endl;
    std::cout << "=========" << std::endl;
}

int main() {
    
    const int maxFallos = 6;

    
    int fallos = 0;

    
    while (fallos < maxFallos) {
        
        ++fallos;

        
        dibujarAhorcado(fallos);

        
        std::cin.ignore();
    }

    
    std::cout << "¡Has perdido! El monito ha sido ahorcado." << std::endl;

    return 0;
}
