#include <iostream>
#include <vector>
#include <algorithm>


int main(int argc, char ** argv)
{
    std::vector<double> ages {1.0, 1.1, 1.2, 1.3, 1.4, 1.5};

    std::vector<std::vector<double>> ages_container {ages, ages, ages};

    for(auto it = ages_container.begin(); it != ages_container.end(); ++it)
    {
        for(auto inner_it = (*it).begin(); inner_it != (*it).end(); ++inner_it)
        {
            std::cout << *inner_it << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}