#include <iostream>
#include <math.h>
#include <string>
#include <fstream>

int main() {
    //fuel requied for a module based on its mass (m)
    // f = floor(M/3) - 2

    std::ifstream infile;
    infile.open("/home/iva/Desktop/FER/AOC/day1/input");
    int fuel = 0;
    std::string line;

    while(std::getline(infile, line)) {
        fuel += floor(std::stoi(line)/3) -2;
    }
    std::cout << fuel;


}