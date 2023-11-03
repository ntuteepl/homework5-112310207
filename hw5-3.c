#include <stdio.h>
#include <stdlib.h>

  int main()
{
  int w_h;
  int h_r;
  double s;

   scanf("%d%d",&w_h,&h_r);
    if(w_h<=60){
     s= w_h * h_r;
    }
    if(61<=w_h && w_h<=120){
     s= w_h * (h_r*1.33);
    }
    if(121<=w_h){
     s= w_h * (h_r*1.66);
     printf("%1.1f\n",s);
    }
}
