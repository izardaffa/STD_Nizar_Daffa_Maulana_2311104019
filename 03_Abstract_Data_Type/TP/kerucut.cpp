#include <cmath>
#include "kerucut.h"

double volumeKerucut(Kerucut kerucut) {
    return (1.0 / 3.0) * 3.14 * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
}

double luasPermukaanKerucut(Kerucut kerucut) {
    double s = sqrt(kerucut.jariJari * kerucut.jariJari + kerucut.tinggi * kerucut.tinggi);
    return 3.14 * kerucut.jariJari * (kerucut.jariJari + s);
}