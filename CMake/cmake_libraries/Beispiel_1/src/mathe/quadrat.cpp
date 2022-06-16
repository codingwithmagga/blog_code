#include "quadrat.h"

Quadrat::Quadrat(const double length)
    : length_(length)
{
}

double Quadrat::flaeche() { return length_ * length_; }

double Quadrat::umfang() { return 4 * length_; }
