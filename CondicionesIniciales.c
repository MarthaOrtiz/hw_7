#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.141592
#define kiloparsec 1
#define G 1
#define m 1

double posicion_0_velocidad_0 (double x_0,double y_0,double vx_0,double vy_0);
int main(int argc, char **argv)
{
if (argc!=5)
{
printf("Faltan argumentos o condiciones iniciales de entrada\n");
}
else{

double x_0=atoi(argv[1]);
double vx_0=atoi(argv[2]);
double y_0=atoi(argv[3]);
double vy_0=atoi(argv[4]);
int particulas=100;



printf("La posicion horizontal inicial es: %f\n",x_0);
printf("La velocidad horizontal inicial es: %f\n",vx_0);
printf("La posicion vertical inicial es: %f\n",y_0);
printf("La velocidad vertical inicial es: %f\n",vy_0);

posicion_0_velocidad_0 (x_0, y_0, vx_0, vy_0);

}
return 0;
}

double posicion_0_velocidad_0 (double x_0, double y_0, double vx_0, double vy_0)
{
//char filename[100]="condiciones_iniciales.dat";
int i;
double posicion_1x [12]; /*Posiciones de las 12 particulas en la orbita 1 eje x*/
double posicion_1y [12]; /*Posiciones de las 12 particulas en la orbita 1 eje y*/
double velocidad_1x [12]; /*Velocidades de las 12 particulas en la orbita 1 eje x*/
double velocidad_1y [12]; /*Velocidades de las 12 particulas en la orbita 1 eje y*/
	for(i=0;i<12;i++)
	{
		posicion_1x[i]= 10*kiloparsec*sin(i*pi/6) + x_0; 
		posicion_1y[i]= 10*kiloparsec*cos(i*pi/6) + y_0;
		velocidad_1x[i]= G*m/i*cos(i*pi/6) + vx_0;
		velocidad_1y[i]= -G*m/i*sin(i*pi/6) + vy_0;
	}

double posicion_2x [18]; /*Posiciones de las 18 particulas en la orbita 2 eje x*/
double posicion_2y [18]; /*Posiciones de las 18 particulas en la orbita 2 eje y*/
double velocidad_2x [18]; /*Velocidades de las 18 particulas en la orbita 2 eje x*/
double velocidad_2y [18]; /*Velocidades de las 18 particulas en la orbita 2 eje y*/
	for(i=0;i<18;i++)
	{
		posicion_2x[i]= 20*kiloparsec*sin(i*pi/9) + x_0; 
		posicion_2y[i]= 20*kiloparsec*cos(i*pi/9) + y_0;
		velocidad_2x[i]= G*m/i*cos(i*pi/9) + vx_0;
		velocidad_2y[i]= -G*m/i*sin(i*pi/9) + vy_0;
	}

double posicion_3x [24]; 
double posicion_3y [24]; 
double velocidad_3x [24]; 
double velocidad_3y [24];
	for(i=0;i<24;i++)
	{
		posicion_3x[i]= 30*kiloparsec*sin(i*pi/12) + x_0; 
		posicion_3y[i]= 30*kiloparsec*cos(i*pi/12) + y_0;
		velocidad_3x[i]= G*m/i*cos(i*pi/12) + vx_0;
		velocidad_3y[i]= -G*m/i*sin(i*pi/12) + vy_0;
	}

double posicion_4x [30]; 
double posicion_4y [30]; 
double velocidad_4x [30]; 
double velocidad_4y [30];
	for(i=0;i<30;i++)
	{
		posicion_4x[i]= 40*kiloparsec*sin(i*pi/15) + x_0; 
		posicion_4y[i]= 40*kiloparsec*cos(i*pi/15) + y_0;
		velocidad_4x[i]= G*m/i*cos(i*pi/15) + vx_0;
		velocidad_4y[i]= -G*m/i*sin(i*pi/15) + vy_0;
	}

double posicion_5x [36]; 
double posicion_5y [36]; 
double velocidad_5x [36]; 
double velocidad_5y [36];
	for(i=0;i<36;i++)
	{
		posicion_5x[i]= 50*kiloparsec*sin(i*pi/18) + x_0; 
		posicion_5y[i]= 50*kiloparsec*cos(i*pi/18) + y_0;
		velocidad_5x[i]= G*m/i*cos(i*pi/18) + vx_0;
		velocidad_5y[i]= -G*m/i*sin(i*pi/18) + vy_0;
	}
return 0;

}

