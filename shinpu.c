/*シンプソン則*/
#include <stdio.h>
	
double kansu(double x){
	return x*x*x*x*x;
	}
	
int main(void){
	double n=2;
	double h=(2-0)/2;
	double s=h*(kansu(0)+2*kansu(0+h)+kansu(2))/2;
	double t=h*(kansu(0)+4*kansu(0+h)+kansu(2))/3;
	int i=0;
	printf("%lf\n",t);
	while(n<8){
		n=2*n;
		h=h/2;
		double as=0;
	for(i=1;i<=n-1;)
	{as=as+kansu(0+i*h);
	i= i+2;
	}
	
	
	double new_s=h*as+s/2;
	
	double new_t=(4*new_s-s)/3;
	
	printf("%lf\n",new_t);
	
	s=new_s;
	
	}
	
	return 0;
}

	
	
	
	   
	
