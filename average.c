#include<stdio.h>
int main()
  {
  float a,b,c,d,e;
  float sum,ave;

  printf("input five numbers:");
  scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

  sum=a+b+c+d+e;
  ave=sum/5;

  printf("The average: %f",ave);

  return 0;
  }
