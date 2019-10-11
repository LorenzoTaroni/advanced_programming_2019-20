#include <iostream>
#include <string>

int main(){

    double number;

    std::string unit;

    std::cout << "Inserisci la misura seguita dalla sua unità per la conversione in Sistema Internazionale\n";

    std::cout << std::endl;

    std::cin >> number >> unit;

    std::cout << std::endl;

    std::cout << "Conversione in corso...\n";

    std::cout << std::endl;

    if(unit == "inch") {number *= 0.0254; unit = " m";}

    if(unit == "yard") {number *= 0.9114; unit = " m";}

    if(unit == "foot") {number *= 0.3048; unit = " m";}

    std::cout << number << unit << std::endl;

    std::cout << std::endl;

    return 0;

}