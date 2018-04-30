#include <vector> 
#include <sstream> 
#include <iostream>


int main() { 

    // km = miles * 1.609934 
    // Enter Miles: 5 
    // 5 miles equels 8.0467 kilometers 


    std::string sMiles; 
    double dMiles,dKilometers; 
    std::cout << "Enter Miles : "; 
    getline(std::cin, sMiles); 

    dMiles = std::stod(sMiles); 
    dKilometers = dMiles * 1.60934; 

    printf("%.1f miles equels %.4f kilometers \n", dMiles, dKilometers); 



}