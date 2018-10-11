/*sor法*/
#include <stdio.h>
#define NUMBER 5
#include <math.h>

int main(void){
	
	double sum=0;
	double error=0;
	int  i,j,s=1;
	double a[NUMBER][NUMBER]={{4,1,0,0,0},{2,4,1,0,0},{0,2,4,1,0},{0,0,2,4,1},{0,0,0,2,4}};
	double x[NUMBER]={0};
	double y[NUMBER]={2,-1,-1,0,3};
	double new_x;
	double h=0.000001;
	double w=1.2;

/*
for(i=0;i<NUMBER;i++)
{printf("y[%d]:",i);
scanf("%lf",&y[i]);
 for(j=0;j<NUMBER;j++)
{ printf("a[%d][%d]:",i,j);
 scanf("%lf",&a[i][j]);
 }
}
*/

while(s<132)
{
for(i=0;i<NUMBER;i++)
{new_x=y[i];
for(j=0;j<NUMBER;j++)
{ if(j!=i)
 new_x=new_x-a[i][j]*x[j];
 }
new_x=w*new_x/a[i][i]+(1-w)*x[i];
sum=sum+fabs(new_x);
error=error+fabs(new_x-x[i]);
x[i]=new_x;
printf("%d:x[%d]:%.8lf\n",s,i,x[i]);
 }
if(error<sum*h)
break;

 s++;
 sum=0;
 error=0;
 }
 
printf("終了です\n");

return 0;
}
