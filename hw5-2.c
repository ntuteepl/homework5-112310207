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
    if(800 <= min <=1500 ){
     tip=(min *0.9) *(double)0.09;
    }
    if(1500<=min){
     tip=((min *0.9) *(double)0.09) *(double)0.79;
    }
    printf("%fn",tip);
}
1分
