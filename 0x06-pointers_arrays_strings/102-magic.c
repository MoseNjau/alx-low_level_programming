#include <stdio.h>

int main(void)
{
  int m;
  int q[5];
  int *r;

  q[2] = 1024;
  r = &m;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(r + 5) = 98;
  /* ...so that this prints 98\n */
  printf("q[2] = %d\n", q[2]);
  return (0);
}
