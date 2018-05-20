#include <stdio.h>
#include <omp.h>
#include "bucket-sort.h"

int main() {
	printf("%d\n", omp_get_max_threads());
	return 0;
}
