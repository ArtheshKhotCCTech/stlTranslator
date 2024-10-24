#include "Reader.h"

#define TOLERANCE 0.0000001

bool comparer::operator()(double a, double b) const
{
	return fabs(a - b) > TOLERANCE ? a < b : false;
}
