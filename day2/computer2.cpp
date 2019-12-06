#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>


int algorithm(std::vector<int> input)
{
    int i = 0;
    int element;

    do
    {
        element = input[i];
        int first_index = input[i + 1];
        int second_index = input[i + 2];
        int result_index = input[i + 3];

        if (element == 1)
        {
            input[result_index] = input[first_index] + input[second_index];
        }
        else if (element == 2)
        {
            input[result_index] = input[first_index] * input[second_index];
        }
        i += 4;
    } while (element != 99);

    return input[0];

}

int main() {

    std::ifstream file("/home/iva/Desktop/FER/AOC/day2/input");
    std::vector<int> input;

    std::string string;
    file >> string;
    std::replace(string.begin(), string.end(), ',', ' ');
    std::stringstream strs(string);
    std::string temp;

    while (strs >> temp)
    {
        input.push_back(std::stoi(temp));
    }


    for(int noun = 0; noun <= 99; ++noun)
    {
        for(int verb = 0; verb <= 99; ++verb)
        {
            input[1] = noun;
            input[2] = verb;

            int final = algorithm(input);
            if (final == 19690720)
            {
                std::cout << 100 * noun + verb;
                break;
            }
        }
    }


}