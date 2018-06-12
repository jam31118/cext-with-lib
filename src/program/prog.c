#include "prog.h"

int prog(void) {
	print_logo();	
	double sum = add_double(-1.2, 1.0);
	printf("sum is %lf\n", sum);

	return 0;
}
