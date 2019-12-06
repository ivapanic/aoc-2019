#import <cstdio>
#import <string>
#include <iostream>


int main()
{
    int min_pass = 284639;
    int max_pass = 748759;
    int n = 6;
    int valid_passwords = 0;

    for(int pass = min_pass; pass <= max_pass; ++pass)
    {
        std::string pass_string = std::to_string(pass);

        for(int m = n; m > 0; --m)
        {
            if (pass_string[m - 1] < pass_string[m - 2])
                break;

            if (m == 2 && pass_string[m - 1] >= pass_string[m - 2])
            {
                bool double_repetitions = false;
                bool multiple_repetitions = false;
                int num_of_repetitions = 1;

                for(int i = 1; i < n; ++i)
                {
                    if (pass_string[i] == pass_string[i - 1])
                    {
                        if (num_of_repetitions < 2) {
                            num_of_repetitions++;

                            if (i < n - 1 && pass_string[i + 1] == pass_string[i])
                                multiple_repetitions = true;
                            else
                            {
                                double_repetitions = true;
                                break;
                            }
                        }

                    }
                    else
                        num_of_repetitions = 1;
                }
                if(double_repetitions)
                    valid_passwords++;
            }

        }

    }
    std::cout << valid_passwords;
}