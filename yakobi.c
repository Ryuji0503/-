/*ヤコビ法*/
#include <stdio.h>
#include <math.h>

int main(void){
	int i,n=2,j,s=1;
	double x[n],z[n],a[n][n],y[n],sum3=0,error=0;
	double e=0.00001;
	for(i=0;i<=n-1;i++)
{	printf("x[%d]:",i);
	scanf("%lf",&x[i]);
	printf("y[%d]:",i);
	scanf("%lf",&y[i]);
}
for(i=0;i<=n-1;i++)
 for(j=0;j<=n-1;j++)
 { printf("a[%d][%d]:",i,j);
  scanf("%lf",&a[i][j]);
  }

  
while(s<60)  
{
for(i=0;i<=n-1;i++)
{ z[i]=y[i];
for(j=0;j<=n-1;j++)
{if(j!=i)
z[i]=z[i]-a[i][j]*x[j];
}
 
 z[i]=z[i]/a[i][i];
 sum3=sum3+fabs(z[i]);
 error=error+fabs(x[i]-z[i]);
 }
 
for(i=0;i<=n-1;i++)
printf("%d回目→z[%d]:%.8lf||",s,i,z[i]);
putchar('\n');


if(sum3*e>error)
break;

for(i=0;i<=n-1;i++)
 x[i]=z[i];
 
s++;
sum3=0;
error=0;
}

printf("終了です\n");
 
 return 0;
 }
 
  
 