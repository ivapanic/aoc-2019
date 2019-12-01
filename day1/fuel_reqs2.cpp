#include <string>
#include <fstream>
#include <math.h>
#include <iostream>

int main() {

    std::ifstream infile;
    infile.open("/home/iva/Desktop/FER/AOC/day1/input");
    int all_fuel = 0;
    std::string line;

    while(std::getline(infile, line)) {
        int fuel = floor(std::stoi(line) / 3) - 2;
        all_fuel += fuel;
        while (fuel > 0) {
            fuel = floor(fuel / 3) - 2;
            if(fuel < 0) {
                break;
            }
            else {
                all_fuel += fuel;
            }

        }
    }
    std::cout << all_fuel;
}

