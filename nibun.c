/*二分法*/
#include <stdio.h>
#include <math.h>

void kansuu(float a,float *s){
	
	*s=cos(a)-a*a;
}


int main(void){
	
float  a=0,b=1;
float s,t,h,p=0.0000001;
int i=1;


 while(i<60)
 {
	float c=(b+a)/2;
    kansuu(c,&h);
    printf("%d;%f\n",i,c);
   if(h==0||fabs(a-b)/2<p)
    break;
   if(h>0)
     a=c;
   if(h<0)
    b=c;
   
   i++;
   }
   
   return 0;
   }
   
  
   
   
