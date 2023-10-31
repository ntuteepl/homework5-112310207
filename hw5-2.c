#include <stdio.h>
#include <stdlib.h>

  int main()
{
  int min;
  double tip;
   scanf("%d",&min);
    if(min <= 800 ){
     tip=min *0.9;
    }
    if(800 <= min && min<=1500 ){
     tip=(min *0.9) *0.9;
    }
    if(1500<=min){
     tip=((min *0.9) *0.9) *0.79;
    }
    printf("%1.1f\n",tip);
}
