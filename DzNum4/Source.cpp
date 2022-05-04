#include "Header.h"

double functionZ() {
	if (a < b) {
		return sqrt(abs(a * a - b * b));
	}
	else {
		return 1 - 2 * cos(a) * sin(b);
	}
}

double functionT(double z) {
	if (z < b) {
		return pow(z + a * a * b, 1 / 3);
	}
	if (z == b) {
		return 1 - log(z) + cos(a * a * b);
	}
	else {
		return 1 / (cos(z * a));
	}
}