#include <stdio.h>
#include <stdlib.h>
#include "bucketsort.h"

#define LENGTH 8

FILE *fileIn, *fileOut;

char *strings;
long int N;

void openFiles() {
	fileIn = fopen("bucketsort.in", "r+");
	printf("%s\n", fileIn);
	if (fileIn == NULL) {
		perror("fopen fin");
		exit(EXIT_FAILURE);
	}

	fileOut = fopen("bucketsort.out", "w");
	if (fileOut == NULL) {
		perror("fopen fout");
		exit(EXIT_FAILURE);
	}
}

void closeFiles(void) {
	fclose(fileIn);
	fclose(fileOut);
}

int main(int argc, char* argv[]) {
	long int i, *r;

	openFiles();

	fscanf(fileIn, "%ld", &N);
	strings = (char*) malloc(N * LENGTH);
	if (strings == NULL) {
		perror("malloc strings");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < N; i++) {
		fscanf(fileIn, "%s", strings + (i * LENGTH));
	}

	fflush(stdout);

	r = bucket_sort(strings, LENGTH, N);

	fflush(stdout);

	for (i = 0; i < N; i++) {
		fprintf(fileOut, "%s\n", strings + (r[i] * LENGTH));
	}
	
		free(r);
	free(strings);
	closeFiles();

	return EXIT_SUCCESS;
}

