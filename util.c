#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "util.h"


void remplir(char T[][MAX],char s[]){
  FILE * fp;
  char * line = NULL;
  size_t len = 0;
  ssize_t read;

  fp = fopen(s, "r");
  if (fp == NULL)
      exit(EXIT_FAILURE);

  int i=0;
  while ((read = getline(&line, &len, fp)) != -1) {
      strcpy(T[i],line);
      i++;
  }
  
  fclose(fp);
  if (line)
      free(line);
}
