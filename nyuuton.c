/*ニュートン法*/
#include <stdio.h>
#include <math.h>


void kansuu(float *s,float *h,float x){
        *s= exp(-x)-x*x;
        *h=-exp(-x)-2*x;
    
}

int main(void){
	
float x=1,x1=0;
float s=0,h=0;
float l=0.00001;
int i=1;

while(i<60)
{

kansuu(&s,&h,x);
x1=x-h/s;

printf("%d;%.6f",i,x1); putchar('|');printf("%.6f\n",h);

if(fabs(x1-x)<l*fabs(x1))
 break;


i++;

x=x1;

}

return 0;
}
