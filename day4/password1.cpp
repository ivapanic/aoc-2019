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
        bool flag_of_value = false;

        for(int m = n; m > 0; --m)
        {
            if (pass_string[m - 1] < pass_string[m - 2])
                break;

            if (m == 2 && pass_string[m - 1] >= pass_string[m - 2])
            {
                bool it_repeats = false;

                for(int i = 1; i < n; ++i)
                {
                    if (pass_string[i] == pass_string[i - 1])
                    {
                        it_repeats = true;
                        break;
                    }
                }
                if (it_repeats)
                    flag_of_value = true;
            }

        }
        if (flag_of_value)
            valid_passwords++;

    }

    std::cout << valid_passwords;
}