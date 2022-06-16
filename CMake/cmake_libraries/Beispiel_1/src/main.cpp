#include "quadrat.h"
#include "rechteck.h"

#include <iostream>

int main()
{
    Rechteck rechteck(2, 6);
    Quadrat quadrat(5);

    std::cout << "Rechteck Fläche: " << rechteck.flaeche() << std::endl;
    std::cout << "Rechteck Umfang: " << rechteck.umfang() << std::endl;
    std::cout << "Quadrat Fläche: " << quadrat.flaeche() << std::endl;
    std::cout << "Quadrat Umfang: " << quadrat.umfang() << std::endl;

    return 0;
}
