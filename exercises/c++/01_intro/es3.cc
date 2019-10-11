#include <iostream>
#include <string>

void get_int();  

int main(){

    get_int();   // just the function calling

    return 0;

}

void get_int(){   // function definition

    float i{};

    while (!(std::cin >> i)){    // Non funziona


        std::cin.clear();

        std::cin.ignore();  

    }

    std::cout << i << std::endl;
    
}