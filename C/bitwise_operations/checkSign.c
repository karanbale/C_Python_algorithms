#include<stdbool.h> 
#include<stdio.h> 
  
bool oppositeSigns(int x, int y) 
{ 
    printf("%d\n", x^y);
    return ((x ^ y) < 0); 
} 
  
int main() 
{ 
    int x = 100, y = -100; 
    if (oppositeSigns(x, y) == true) 
       printf ("Signs are opposite\n"); 
    else
      printf ("Signs are not opposite\n"); 
    return 0; 
} 