#include <iostream>
#include <vector>


int main(int argc, char ** argv)
{
    std::vector<double> ages {1.0, 1.1, 1.2, 1.3, 1.4, 1.5};

    for(auto it = ages.begin(); it != ages.end(); ++it)
    {
        std::cout << *it << "\t";
    }
    std::cout << std::endl;

    return 0;
}
