//accept length of side of sqaure from user and find perimeter and area
#include<stdio.h>
main()
{
  float length,perimeter,area;

  printf("\n enter th length of side");
  scanf("%f",&length);

  area=length*length;
  perimeter=4*length;

  printf("\n the area is %f and perimeter is %f",area,perimeter);

}