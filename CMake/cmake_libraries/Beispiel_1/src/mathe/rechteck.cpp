#include "rechteck.h"

Rechteck::Rechteck(const double length, const double width)
    : length_(length)
    , width_(width)
{
}

double Rechteck::flaeche() { return length_ * width_; }

double Rechteck::umfang() { return 2 * (length_ + width_); }
