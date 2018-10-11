/*Gauss-Jordan*/
#include <stdio.h>
#include <math.h>
#define NUMBER 3



int main(void){
	
double s;
double a[NUMBER][NUMBER];
double y[NUMBER];
double x[NUMBER]={0};
int i,j,k,l,temp=-1,p;
double t=0;
for(i=0;i<NUMBER;i++)
{ 
printf("y[%d]:",i);
 scanf("%lf",&y[i]);
for(j=0;j<NUMBER;j++)
 {
 printf("a[%d][%d]:",i,j);
  scanf("%lf",&a[i][j]);
  }
  }
  
 /*前進消去*/
 for(i=0;i<NUMBER-1;i++)
 {
     /*ピボット*/

    double pl=a[i][i];
 for(l=i+1;l<NUMBER;l++)
  {
    if(fabs(pl)<fabs(a[l][i]))
      { temp=l;
      pl=a[l][i];}
       }
      
if(temp>0)
{
    for(p=i;p<NUMBER;p++)
    { double gu2=a[i][p];
     a[i][p]=a[temp][p];
     a[temp][p]=gu2;
  }
double r=y[i];
y[i]=y[temp];
y[temp]=r;
  }
 for(j=i+1;j<NUMBER;j++)
   { s=a[j][i]/a[i][i];
    for(k=i+1;k<NUMBER;k++)
     {a[j][k]=a[j][k]-s*a[i][k];}
      y[j]=y[j]-s*y[i];
      }
      }
  
 /*後退代入*/
x[NUMBER-1]=y[NUMBER-1]/a[NUMBER-1][NUMBER-1];
   for(i=NUMBER-2;i>-1;i--)
   {   
   x[i]=y[i];
   for(k=i+1;k<NUMBER;k++)
       { x[i]=x[i]-a[i][k]*x[k];}
     x[i]=x[i]/a[i][i];
     }
     
  /*  x[4]=y[4]/a[4][4];
 x[3]=(y[3]-a[3][4]*x[4])/a[3][3];
  x[2]=(y[2]-a[2][3]*x[3]-a[2][4]*x[4])/a[2][2];
  x[1]=(y[1]-a[1][2]*x[2]-a[1][3]*x[3]-a[1][4]*x[4])/a[1][1];
  x[0]=(y[0]-a[0][1]*x[1]-a[0][2]*x[2]-a[0][3]*x[3]-a[0][4]*x[4])/a[0][0];*/
  
  

     
 for(i=0;i<NUMBER;i++)    
   printf("x[%d]:%lf\n",i,x[i]);
  

 return 0;
    }
    
     
       
        