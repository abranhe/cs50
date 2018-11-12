#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cs50.h"

static int assertionCount = 0;
static int errorCount = 0;

static void
stringTest(const string str, const char *arr_of_chars) {

	if (strcmp(str, arr_of_chars)) {
		errorCount++;

	  fprintf(stderr, "\033[31m");
	  fprintf(stderr,"  (✖) Error :(");
	  fprintf(stderr, "\n\033[0m");
	  fprintf(stderr, "\n");
  } else {
    printf("\033[32m  (✓) Test passed\033[0m\n");
  }
  assertionCount++;
}

int
main() {

	// Simple test comparing type `string` with `char*`
	stringTest("abranhe", "abranhe");
	stringTest("carlos", "carlos");
	stringTest("james", "james");
	stringTest("cs50", "cs50");
	stringTest("abraham", "abraham");

  // Log total errors.
  printf("\n");

  if (errorCount != 0) {
    printf("\033[31m");
    printf("(✖) Failed on %d of %d assertions", errorCount, assertionCount);
    printf("\033[0m");
    printf("\n");
    exit(EXIT_FAILURE);
  }

  // Or, log total successes.
  printf("\033[32m");
  printf("(✓) Passed %d assertions without errors", assertionCount);
  printf("\033[0m");
  printf("\n");

  return 0;
}
