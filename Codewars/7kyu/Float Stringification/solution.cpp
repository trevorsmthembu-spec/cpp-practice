#include <string>
#include <sstream>
#include <limits>

using namespace std;

string dtos(double x)
{
    ostringstream out;
    out.precision(numeric_limits<double>::max_digits10);
    out << x;

    return out.str();
}