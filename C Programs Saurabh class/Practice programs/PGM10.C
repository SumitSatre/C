//pgm length of 3 side
#include<stdio.h>

main()
{
  int a,b,c,perimeter;


  printf("\n enter side of 3 triangle ");
  scanf("%d%d%d",&a,&b,&c);

  perimeter=a+b+c;

  printf("\n the triangle of perimeter %d",perimeter);

}