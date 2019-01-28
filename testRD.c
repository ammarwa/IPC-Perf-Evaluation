#include <stdio.h>
#include <stdlib.h>
// #include <cilk/cilk.h>
// #include <cilk/cilk_api.h>

static int row = 2;
static int PRINT = 0;
static char * FILENAME = "mawi_201512020330.mtx";

int main(int argc, char** argv){
  FILE* file = fopen (FILENAME, "r");
	if(file == NULL){
		printf("Error reading file\n");
		exit(1);
	}

	char * line = NULL;
  size_t len = 0;
	ssize_t read;

  while ((read = getline(&line, &len, file)) != -1) {
	read = getline(&line, &len, file);
	read = getline(&line, &len, file);
	read = getline(&line, &len, file);
 }
  fclose (file);
}
