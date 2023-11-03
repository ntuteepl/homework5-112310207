#include <stdio.h>

  int main() {

  int w_h;  // 工时
  int h_r;  // 时薪
  double s; // 工资
   scanf("%d %d", &w_h, &h_r);
   if (w_h <= 60) {
    s = w_h * h_r;
}
   else if (w_h <= 120) {
    s =60 * h_r + (w_h - 60) * h_r * 1.33;
    }
   else {
    s =60 * h_r + 60 * h_r * 1.33 + (w_h - 120) * h_r * 1.66;
}
  printf("%.1f\n", s);
return 0;
}
