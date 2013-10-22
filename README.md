hw_7
====

Exercise 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (void)
{

int i;
int n_points=100;
double u_inicial[100];
double x_u_inicial=0.0;
double delta_x=1.0/100.0;
for (i=0;i<n_points;i++)
	{
	x_u_inicial = exp(-((i*delta_x-0.3)*(i*delta_x-0.3))/0.01);
	u_inicial[i]=x_u_inicial;
	printf("%f\n",u_inicial[i]);
	}

return 0;
}
