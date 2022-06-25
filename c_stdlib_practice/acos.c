#include <stdio.h>
#include <math.h>


#define PI 3.141592

int main(void) {
	double param, result;
	param = 0.5;
	result = acos(param) * 180.0 / PI;
	printf("%lf, %lf", param, result);
	return 0;
}
