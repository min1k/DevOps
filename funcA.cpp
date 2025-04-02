#include "funcA.h"
double FuncA::calculate(int n){
	double sum = 0;
	for(int k = 0; k < n; k++){
		double term = tgamma(2 * k + 1) / (pow(4, k) + pow(tgamma(k + 1), 2) * (2 * k + 1));
		sum += term;
	}
	return 0;
}

