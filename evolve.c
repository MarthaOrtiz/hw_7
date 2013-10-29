#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define USAGE "./a.out n_times value_a value_b"

#define pi 3.141592 
#define GM 1.0

int main(int argc, char** argv){

float posx [121];
float posy [121];
float velx [121];
float vely [121];



int i;

FILE *file; 
file = fopen("resultados.txt","a+"); 
for(i=1;i<121;i++)
 {
/*Aca se lee el archivo y se define posx posy vel y vely deacuerdo al archivo*/


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

