#include <stdio.h>
#include <stdlib.h>

  int main()
{
  double f;
  float c;
   scanf("%f",&c) ;
    f = (c*9/5) + 32;
    f = round (f*10)/10;
   printf("%1f\n",f);
    return 0;
}
