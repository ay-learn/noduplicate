#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argv, char* argc[]) {
  char All[MAX][MAX];
  char Deja[MAX][MAX];
  char R[MAX][MAX];

  remplir(All, argc[1]);
  remplir(Deja, argc[2]);

  int i, j, k, b;

  for (i = 0; i < MAX && *All[i] != '\0'; b = 1, i++) {
    for (j = 0, b = 1; j < MAX && *Deja[j] != '\0'; j++) {
      if (strcmp(All[i], Deja[j]) == 0) {
        b = 0;
      }
    }
    if (b) {
      strcpy(R[k++], All[i]);
    }
  }

  for (int i = 0; i < MAX && *R[i] != '\0'; i++) {
    printf("%s\n", R[i]);
  }

  return 0;
}
