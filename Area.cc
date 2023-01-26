//program of finding area of a circle
#include <stdio.h>
int main()
{
#define pi 3.142
  float radius,area;
  printf("Enter radius of circle");
  scanf("%f",&radius);
  area=pi*radius*radius;
  printf("Area=%f",area);
  return 0;
}