/*LU分解*/
#include <stdio.h>
#define NUMBER 5
int main(void){
	
float a[NUMBER][NUMBER],y[NUMBER],z[NUMBER],x[NUMBER];
int i,j,k;
float l[NUMBER][NUMBER]={0},u[NUMBER][NUMBER]={0};


for(i=0;i<NUMBER;i++)
l[i][i]=1;
for(i=0;i<NUMBER;i++)
{for(j=i+1;j<NUMBER;j++)
l[i][j]=0;
for(j=0;j<i;j++)
u[i][j]=0;
}



/*方程式代入*/
for(i=0;i<NUMBER;i++)
{
	printf("y[%d]",i);
	scanf("%f",&y[i]);
for(j=0;j<NUMBER;j++)
{
	printf("a[%d][%d]",i,j);
    scanf("%f",&a[i][j]);
    }
    }
   
   /*LU分解*/
  for(i=0;i<NUMBER;i++)
  {
 for(j=0;j<i;j++)
{ l[i][j]=a[i][j];
 for(k=0;k<j;k++)
 {l[i][j]=l[i][j]-l[i][k]*u[k][j];}
 l[i][j]=l[i][j]/u[j][j];
 }
for(j=i;j<NUMBER;j++)
{u[i][j]=a[i][j];
for(k=0;k<i;k++)
 u[i][j]=u[i][j]-l[i][k]*u[k][j];
 }
 }
 puts("LU分解");
 for(i=0;i<NUMBER;i++)
 {for(j=i;j<NUMBER;j++)
  printf("u[%d][%d]:%f\n",i,j,u[i][j]);
  }
  for(i=0;i<NUMBER;i++)
  {for(j=0;j<i;j++)
 printf("l[%d][%d]:%f\n",i,j,l[i][j]);
 }
  
 /*前進代入*/
 z[0]=y[0];
 for(i=1;i<NUMBER;i++)
{ z[i]=y[i];
 for(j=0;j<i;j++)
 {z[i]=z[i]-l[i][j]*z[j];}

 }
 
 /*後退代入*/
  x[NUMBER-1]=z[NUMBER-1]/u[NUMBER-1][NUMBER-1];
   for(i=NUMBER-2;i>-1;i--)
 {  x[i]=z[i];
   for(k=i+1;k<NUMBER;k++)
       { x[i]=x[i]-u[i][k]*x[k];}
     x[i]=x[i]/u[i][i];
     }
     
     
     puts("答え");
     for(i=0;i<NUMBER;i++)
     printf("x[%d]:%f\n",i,x[i]);
 return 0;
 }
 