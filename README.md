# CPP ITERATOR

This repository demonstrate the usage of c++ iterators.

- Note that ++it and it++ makes no differences

## Single Loop

```cpp
#include <iostream>
#include <vector>


int main(int argc, char ** argv)
{
    std::vector<double> points {1.0, 1.1, 1.2, 1.3, 1.4};

    for(auto it = points.begin(); it != points.end(); ++it)
    {
        std::cout << *it << "\t";
    }
    std::cout << std::endl;

    return 0;
}
```

## Nested Loop

```cpp
#include <iostream>
#include <vector>


int main(int argc, char ** argv)
{
    std::vector<double> points {1.0, 1.1, 1.2, 1.3, 1.4};
    std::vector<std::vector<double>> points_container {points, points, points};

    for(auto it = points_container.begin(); it != points_container.end(); ++it)
    {
        for(auto inner_it = (*it).begin(); inner_it != (*it).end(); ++inner_it)
        {
            std::cout << *inner_it << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

## Range Single Loop

```cpp
```
## Reference
- Discussion on Stackoverflow [link](https://stackoverflow.com/questions/14373934/iterator-loop-vs-index-loop)
- Video explanation (boqian) [link](https://www.youtube.com/watch?v=vO2AlrBf5rQ)