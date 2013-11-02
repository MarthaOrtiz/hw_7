#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define USAGE "./a.out n_times value_a value_b"

#define pi 3.141592 
#define GM 1.0

int main(int argc, char* argv[]){

float posx [121];
float posy [121];
float velx [121];
float vely [121];

float p_x [121];
float p_y [121];
float v_x [121];
float v_y [121];



int i;
FILE *in;
in=fopen(argv[1],"r");
FILE *file; 
file = fopen("resultados2.txt","a+"); 
for(i=1;i<121;i++)
{

	fscanf(in,"%f\n",&posx[i]);
/*	printf("%f\n",posx[i]);   */
	p_x[i]=posx[i];
	fscanf(in,"%f\n",&posy[i]);

	fscanf(in,"%f\n",&velx[i]);

	fscanf(in,"%f\n",&vely[i]);



}

for(i=1;i<121;i++)
 {
printf ("%f\n",p_x[i]);


}

for(i=1;i<121;i++)
 {
Rungekutta(i);


}

fclose(file); 
return 0;
}
int Rungekutta(int j){
  /*hace rungekuta 4 orden cambiandole los valores a posx[j] posy[j] velx[j] y vely[j] */
  return 1;
}

