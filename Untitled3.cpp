
#include <stdio.h>
#include <math.h>
int main(){
  double x,y;
  char o; 
  
  
   printf(" ‰»Îx∞°–÷µ‹\n") ;
    scanf("%lf",&x);

  if(x<0) 
  {
  	y=0;
  }

   else if(x<=15) 
       {
     y=4*x/3;
  } 
   else 
  {
  	y=2.5*x-10.5;
                    
  }
   printf("f(%.2lf)=%.2lf\n",x,y) ; 
return 0;
}


