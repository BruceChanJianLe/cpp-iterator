#include <iostream>
#include <vector>


int main(int argc, char ** argv)
{
    std::vector<double> ages {1.0, 1.1, 1.2, 1.3, 1.4, 1.5};

    std::vector<std::vector<double>> ages_container {ages, ages, ages};

    for(auto & age_container : ages_container)
    {
        for(auto & age : age_container)
        {
            std::cout << age << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
