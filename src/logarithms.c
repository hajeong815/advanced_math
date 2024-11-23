#include <math.h>
#include "math/advanced/logarithms.h"

double log_base(double x, double base) {
    return log(x) / log(base);
}

double natural_log(double x) {
    return log(x);
}
