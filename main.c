// Author: Hoang Bui hhb5051@psu.edu
// Collaborator Ved Walavalkar vtw5023@psu.edu
// Collaborator Adalia Chen asc209@psu.edu
#include <stdio.h>
#include <stdlib.h> 
#include <readline/readline.h>

int main(void) {
  char *container = readline("Enter temperature in celcius: ");
  double cel = atof(container);
  double fah = cel * 9/5 + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.", cel, fah);
  return 0;
}