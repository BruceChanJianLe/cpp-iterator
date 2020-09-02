#include <iostream>
#include <vector>


int main(int argc, char ** argv)
{
    std::vector<int> points {0, 1, 2, 3, 4};
    std::vector<int> points2 {0, 2, 4, 6, 8};
    std::vector<double> dots {0.0, 0.1, 0.2, 0.3, 0.4};

    // Method 1
    std::cout << "Method #1" << std::endl;
    auto it1 = points.begin();
    auto it2 = dots.begin();
    while(it1 != points.end() and it2 != dots.end())
    {
        std::cout << *it1 << "\t" << * it2 << std::endl;
        it1++, it2++;
    }

    // Method 2
    std::cout << "\nMethod #2" << std::endl;
    for(struct {std::vector<int>::iterator it1; std::vector<double>::iterator it2;} x = {points.begin(), dots.begin()}; x.it1 != points.end() and x.it2 != dots.end(); ++x.it1, ++x.it2)
    {
        std::cout << *x.it1 << "\t" << *x.it2 << std::endl;
    }

    // Others
    std::cout << "\nUse this if two iterator are the same" << std::endl;
    for(auto it1 = points.begin(), it2 = points2.begin(); it1 != points.end() and it2 != points2.end(); ++it1, ++it2)
    {
        std::cout << *it1 << "\t" << *it2 << std::endl;
    }

    return 0;
}