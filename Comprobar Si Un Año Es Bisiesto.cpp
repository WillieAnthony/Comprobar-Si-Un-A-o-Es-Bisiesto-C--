// Codigo en lenguaje C++ que verifica si un año es bisiesto.



#include <iostream>

int main() {
    int year;
    
    std::cout << "VERIFICAR SI UN AÑO ES BISIESTO\n\n";
    
    // Solicitar al usuario que ingrese un año
    std::cout << "Ingrese un Año: ";
    std::cin >> year;
    
    // Verificar si el año es bisiesto
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << "\nEl Año " << year << " es Bisiesto.\n\n";
    } else {
        std::cout << "\nEl Año " << year << " NO es Bisiesto.\n\n";
    }
    
    // Imprimir la fecha y los nombres
    std::cout << "30/06/2024\n";
    std::cout << "David Salazar Gonzalez\n";
    std::cout << "Willie Anthony\n";
    
    return 0;
}
