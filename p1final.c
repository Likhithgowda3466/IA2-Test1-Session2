#include<stdio.h>
void input(float *base,float *height)
{
 printf("enter a number\n");
 scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
 *area = 0.5*base*height;

}
void output(float height,float base ,float area)
{
 printf("the area of triangle %f and %f is %f\n",height,base,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(height,base,area);
  return 0;

}