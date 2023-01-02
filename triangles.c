#include <stdio.h>

int main()
{
    int x, y, z;
    
    printf("Input values from small to big to justify their type of triangles!\n");
    scanf("%d %d %d", &x, &y, &z);
    if ( x*x + y*y >= z*z)
     if ( x*x + y*y == z*z)
      if ( x == y )
      printf("isosceles right triangle!");
      else
      printf("right angle triangle!");
     else
      if ( x == y )
       if (y == z )
       printf("equilateral triangle!");
       else
       printf("isosceles Acute-angled triangle!");
      else
       if ( y == z )
       printf("isosceles Acute-angled triangle!");
       else
       printf("Acute-angled triangle!");
    else
     if ( x == y )
     printf("isosceles obtuse-angled triangle!");
     else
     printf("obtuse-angled triangle!");
    return 0;
}
