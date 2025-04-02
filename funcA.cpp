#include "funcA.h"

double FuncA::calculate(){
	return tgamma(1) / (pow(4, 0) * pow(tgamma(0 + 1), 2) * 1) +
	tgamma(3) / (pow(4, 1) * pow(tgamma(1 + 1), 2) * 3) +
	tgamma(5) / (pow(4, 2) * pow(tgamma(2 + 1), 2) * 5);
}

