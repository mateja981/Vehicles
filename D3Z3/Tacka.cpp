#include "Tacka.h"

double Tacka::rastojanje(Tacka& t2) const
{
    return sqrt(pow((x-t2.x) , 2)+ pow((y - t2.y), 2));
}

ostream& Tacka::ispis(ostream& os) const
{
    os << "(" << x << "," << y << ")";
    return os;
}
