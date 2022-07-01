#ifndef RECHTECK_H
#define RECHTECK_H

class Rechteck {
public:
  Rechteck(const double length, const double width);
  
  double flaeche();
  double umfang();

private:
  double length_;
  double width_;
};

#endif // RECHTECK_H
