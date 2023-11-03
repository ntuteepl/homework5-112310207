#include <stdio.h>

  int main() {

  int H , M;
  float angle;
   scanf("%d%d",&H,&M);
    if (H < 1 || H > 12 || M < 0 || M > 59);
     float M_angle = M * 6;
     float H_angle = (H % 12) * 30 + M * 0.5;
      angle=(H_angle - M_angle);
      if (angle > 180) {
        angle = 360 - angle;
}
   printf("%1.3f\n",angle);
}
