#include <iostream>

int main()
{
    int position[2] = {1, 2};
    auto [x, y] = position;

    std::cout << "Position: " << x << " " << y << std::endl;
    
    return 0;
}
