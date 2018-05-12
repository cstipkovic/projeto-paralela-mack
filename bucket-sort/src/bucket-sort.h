/**
 * Bucket Sort Lib
 * bucket-sort.h
 *
 * Code Reference: http://lspd.mackenzie.br/marathon/12/problemset.pdf
 * */
#ifndef BUCKETSORT_H_

typedef struct {
	long int *data;
	int length;
	long int total;
} bucket;

void sort(char *, bucket *);
long int* bucket_sort(char *, int, long int);
#define BUCKETSORT_H_

#endif /* BUCKETSORT_H_ */
