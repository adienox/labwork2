// WAP to calculate the sum of two different distance in feet and inch using structure

#include <stdio.h>

struct distance
  {
    int feet;
    int inch;
  };

int main ()
{
  struct distance dis, dis1, dis2;

  printf("Enter first distance: ");
  scanf("%d %d", &dis1.feet, &dis1.inch);
  printf("Enter second distance: ");
  scanf("%d %d", &dis2.feet, &dis2.inch);

  dis.inch = (dis1.inch + dis2.inch) % 12;
  dis.feet = dis1.feet + dis2.feet + (dis1.inch+dis2.inch) / 12;

  printf("The sum of distance is %d Feet %d Inch", dis.feet, dis.inch);
  return 0;
}
