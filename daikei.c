/*台形則*/
#include <stdio.h>

double kansu(double a){
	return a*a*a*a*a;
}


int main(void){
	int i;
	double a=0;
	double b=2;
	double N=1;
	double h=b-a;
	double s=((kansu(0)+kansu(2))*h)/2;
	printf("%lf\n",s);
	
	while(N<=64){
		N=2*N;
		h=h/2;
		double New_s=0;
	for(i=1;i<=N-1;){
		 New_s=New_s+kansu(a+h*i);
		 i=i+2;
		}
		
		double T=s/2+New_s*h;
		printf("%lf\n",T);
		s=T;
		}
		
		return 0;
		}
		
		