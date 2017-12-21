
#include <stdio.h>
#include <iostream>

#include "a.h"

/*
the file shows use of extern.
the variable g_a_value is defined in file a.cpp,
and when use in file main.cpp, should use 
extern int g_a_value to use it.
*/

int main()
{


  extern int g_a_value;

  printf("main:g_a_value = %d\n", g_a_value);
  show_value();

  g_a_value = 20;

  printf("main:g_a_value= %d\n",g_a_value);
  show_value();

  return 0;
}

/*
main:g_a_value = 10
g_a_value = 10
main:g_a_value= 20
g_a_value = 20

*/