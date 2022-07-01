#ifndef QUADRAT_H
#define QUADRAT_H

class Quadrat
{
public:
    Quadrat(const double length);

    double flaeche();
    double umfang();

private:
    double length_;
};

#endif // QUADRAT_H
