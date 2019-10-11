#include <iostream>
#include <string>

int main() {

    int count = 1;
    
    std::string s1 = "", s2; 
    
    std::string line;
    
    while(std::getline(std::cin,line)){
        
        s2 = line;

        if (s1==s2){

            count = count + 1;
        
        } else{
            
            if (s1 != ""){

                std::cout << count << " " << s1 << std::endl;
            
                count = 1;

            }
           
        }
        
        s1 = s2;
    
    }

   return 0; 

}