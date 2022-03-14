// WAP to calculate the sum of time using structure

#include <stdio.h>

struct time
  {
    int hh;
    int mm;
    int ss;
  };

int main (int argc, char *argv[])
{
  struct time t, t1, t2;
  printf("Enter first time (HH:MM:SS) > ");
  scanf("%d:%d:%d", &t1.hh, &t1.mm, &t1.ss);
  printf("Enter second time (HH:MM:SS) > ");
  scanf("%d:%d:%d", &t2.hh, &t2.mm, &t2.ss);

  t.ss = (t1.ss + t2.ss) % 60;
  t.mm = (t1.mm + t2.mm) % 60;
  t.hh = t1.hh + t2.hh + ((t1.mm + t2.mm) / 60) + ((t1.ss + t2.ss) / 60);

  printf("The sum of time is %d:%d:%d \n", t.hh, t.mm, t.ss);
  
  return 0;
}
