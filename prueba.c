#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define USAGE "./a.out n_times value_a value_b"

#define pi 3.141592 
#define GM 44989




float Rungekuttax(float posx, float posy, float velx, float vely, float t ,float xo, float yo, float vxo, float vyo, float x1, float y1, float vx1, float vy1){
  /*hace rungekuta 4 orden en la posicion x tomando como parametros las posiciones de las galaxias*/



float k1x1=velx;
float k1x2=GM * posx / (pow(pow(posx - xo,2) + pow(posy-yo,2),3 / 2));
float k1y1=vely;
float k1y2=GM * posy / (pow(pow(posx-xo,2) + pow(posy-yo,2),3 / 2));
 
float k2x1=velx + (t * k1x2 / 2);
float k2x2=GM * (posx + t * k1x1 / 2  - xo + (t * vxo) / 2) / pow(pow(posx + t * k1y1 / 2  - xo + (t * vxo) / 2, 2) + pow(posy + t * k1x1 / 2  - yo + (t * vyo) / 2, 2),3 / 2) + GM * (posx + t * k1x1 / 2  - x1 + (t * vx1) / 2) / pow(pow(posx + t * k1y1 / 2  - x1 + (t * vx1) / 2, 2) + pow(posy + t * k1x1 / 2  - y1 + (t * vy1) / 2, 2),3 / 2);
float k2y1=vely + (t * k1y2 / 2);
float k2y2=GM * (posy + t * k1y1 / 2  - yo + (t * vyo) / 2) / pow(pow(posx + t * k1y1 / 2  - xo + (t * vxo) / 2, 2) + pow(posy + t * k1x1 / 2  - yo + (t * vyo) / 2, 2),3 / 2) + GM * (posy + t * k1y1 / 2  - y1 + (t * vy1) / 2) / pow(pow(posx + t * k1y1 / 2  - x1 + (t * vx1) / 2, 2) + pow(posy + t * k1x1 / 2  - y1 + (t * vy1) / 2, 2),3 / 2);
float k3x1=velx + (t * k2x2 / 2);
float k3x2=GM * (posx + t * k2x1 / 2  - xo + (t * vxo) / 2) / pow(pow(posx + t * k2y1 / 2  - xo + (t * vxo) / 2, 2) + pow(posy + t * k2x1 / 2  - yo + (t * vyo) / 2, 2),3 / 2) + GM * (posx + t * k2x1 / 2  - x1 + (t * vx1) / 2) / pow(pow(posx + t * k2y1 / 2  - x1 + (t * vx1) / 2, 2) + pow(posy + t * k2x1 / 2  - y1 + (t * vy1) / 2, 2),3 / 2);
float k3y1=vely + (t * k2y2 / 2);
float k3y2=GM * (posy + t * k2y1 / 2  - yo + (t * vyo) / 2) / pow(pow(posx + t * k2y1 / 2  - xo + (t * vxo) / 2, 2) + pow(posy + t * k2x1 / 2  - yo + (t * vyo) / 2, 2),3 / 2) + GM * (posy + t * k2y1 / 2  - y1 + (t * vy1) / 2) / pow(pow(posx + t * k2y1 / 2  - x1 + (t * vx1) / 2, 2) + pow(posy + t * k2x1 / 2  - y1 + (t * vy1) / 2, 2),3 / 2);
float k4x1=velx + t * k3x2;
float k4x2=GM * (posx + t * k3x1  - (xo + t * vxo)) / pow(pow(posx + t * k3y1 - xo + (t * vxo) , 2) + pow(posy + t * k3x1- (yo + t * vyo) ,2),3 / 2) + GM * (posx + t * k3x1  - (x1 + t * vx1)) / pow(pow(posx + t * k3y1 - x1 + (t * vx1) , 2) + pow(posy + t * k3x1- (y1 + t * vy1) ,2),3 / 2);
float k4y1=vely + t * k3y2;
float k4y2=GM * (posy + t * k3y1  - (yo + t * vyo)) / pow(pow(posx + t * k3y1 - xo + (t * vxo) , 2) + pow(posy + t * k3x1- (yo + t * vyo) ,2),3 / 2) + GM * (posy + t * k3y1  - (y1 + t * vy1)) / pow(pow(posx + t * k3y1 - x1 + (t * vx1) , 2) + pow(posy + t * k3x1- (y1 + t * vy1) ,2),3 / 2);

float kx1=(k1x1 + 2 * k2x1 + 2 * k3x1 + k4x1) / 6;
float kx2=(k1x2 + 2 * k2x2 + 2 * k3x2 + k4x2) / 6;
float ky1=(k1y1 + 2 * k2y1 + 2 * k3y1 + k4y1) / 6;
float ky2=(k1y2 + 2 * k2y2 + 2 * k3y2 + k4y2) / 6;




return posx + kx1 * t;



 
}

float Rungekuttay(float posx, float posy, float velx, float vely, float t ,float xo, float yo, float vxo, float vyo, float x1, float y1, float vx1, float vy1){
  /*hace rungekuta 4 orden en la posicion y tomando como parametros las posiciones de las galaxias*/


float k1x1=velx;
float k1x2=GM * posx / (pow(pow(posx - xo,2) + pow(posy-yo,2),3 / 2));
float k1y1=vely;
float k1y2=GM * posy / (pow(pow(posx-xo,2) + pow(posy-yo,2),3 / 2));
 
float k2x1=velx + (t * k1x2 / 2);
float k2x2=GM * (posx + t * k1x1 / 2  - xo + (t * vxo) / 2) / pow(pow(posx + t * k1y1 / 2  - xo + (t * vxo) / 2, 2) + pow(posy + t * k1x1 / 2  - yo + (t * vyo) / 2, 2),3 / 2) + GM * (posx + t * k1x1 / 2  - x1 + (t * vx1) / 2) / pow(pow(posx + t * k1y1 / 2  - x1 + (t * vx1) / 2, 2) + pow(posy + t * k1x1 / 2  - y1 + (t * vy1) / 2, 2),3 / 2);
float k2y1=vely + (t * k1y2 / 2);
float k2y2=GM * (posy + t * k1y1 / 2  - yo + (t * vyo) / 2) / pow(pow(posx + t * k1y1 / 2  - xo + (t * vxo) / 2, 2) + pow(posy + t * k1x1 / 2  - yo + (t * vyo) / 2, 2),3 / 2) + GM * (posy + t * k1y1 / 2  - y1 + (t * vy1) / 2) / pow(pow(posx + t * k1y1 / 2  - x1 + (t * vx1) / 2, 2) + pow(posy + t * k1x1 / 2  - y1 + (t * vy1) / 2, 2),3 / 2);
float k3x1=velx + (t * k2x2 / 2);
float k3x2=GM * (posx + t * k2x1 / 2  - xo + (t * vxo) / 2) / pow(pow(posx + t * k2y1 / 2  - xo + (t * vxo) / 2, 2) + pow(posy + t * k2x1 / 2  - yo + (t * vyo) / 2, 2),3 / 2) + GM * (posx + t * k2x1 / 2  - x1 + (t * vx1) / 2) / pow(pow(posx + t * k2y1 / 2  - x1 + (t * vx1) / 2, 2) + pow(posy + t * k2x1 / 2  - y1 + (t * vy1) / 2, 2),3 / 2);
float k3y1=vely + (t * k2y2 / 2);
float k3y2=GM * (posy + t * k2y1 / 2  - yo + (t * vyo) / 2) / pow(pow(posx + t * k2y1 / 2  - xo + (t * vxo) / 2, 2) + pow(posy + t * k2x1 / 2  - yo + (t * vyo) / 2, 2),3 / 2) + GM * (posy + t * k2y1 / 2  - y1 + (t * vy1) / 2) / pow(pow(posx + t * k2y1 / 2  - x1 + (t * vx1) / 2, 2) + pow(posy + t * k2x1 / 2  - y1 + (t * vy1) / 2, 2),3 / 2);
float k4x1=velx + t * k3x2;
float k4x2=GM * (posx + t * k3x1  - (xo + t * vxo)) / pow(pow(posx + t * k3y1 - xo + (t * vxo) , 2) + pow(posy + t * k3x1- (yo + t * vyo) ,2),3 / 2) + GM * (posx + t * k3x1  - (x1 + t * vx1)) / pow(pow(posx + t * k3y1 - x1 + (t * vx1) , 2) + pow(posy + t * k3x1- (y1 + t * vy1) ,2),3 / 2);
float k4y1=vely + t * k3y2;
float k4y2=GM * (posy + t * k3y1  - (yo + t * vyo)) / pow(pow(posx + t * k3y1 - xo + (t * vxo) , 2) + pow(posy + t * k3x1- (yo + t * vyo) ,2),3 / 2) + GM * (posy + t * k3y1  - (y1 + t * vy1)) / pow(pow(posx + t * k3y1 - x1 + (t * vx1) , 2) + pow(posy + t * k3x1- (y1 + t * vy1) ,2),3 / 2);

float kx1=(k1x1 + 2 * k2x1 + 2 * k3x1 + k4x1) / 6;
float kx2=(k1x2 + 2 * k2x2 + 2 * k3x2 + k4x2) / 6;
float ky1=(k1y1 + 2 * k2y1 + 2 * k3y1 + k4y1) / 6;
float ky2=(k1y2 + 2 * k2y2 + 2 * k3y2 + k4y2) / 6;



return posy + ky1 * t;



 
}




int main(int argc, char** argv){


/*Define las listas donde se van a guardar las posiciones y velocidades de las estrellas asi como unas variables locales que vamos a utilizar*/

float posx[242];
float posy[242];
float velx[242];
float vely[242];
char line[180];

float pposx;
float pposy;
float pvelx;
float pvely;

double resulx;
double resuly;


float dat;
int i;

int j;

/*Crea los archivos que se van a utilizar*/

FILE *file; 
file = fopen("resultados.txt","rt"); 

FILE *file1; 
file1 = fopen("dosgalaxias1.txt","a+"); 

FILE *file2; 
file2 = fopen("dosgalaxias2.txt","a+"); 
FILE *file3; 
file3 = fopen("dosgalaxias3.txt","a+"); 
FILE *file4; 
file4 = fopen("dosgalaxias4.txt","a+"); 
FILE *file5; 
file5 = fopen("dosgalaxias5.txt","a+"); 


/*Lee los archivos y guarda los datos en las listas ya creadas*/
for(i=0;i<242;i++)
 {

fscanf (file, "%f", &dat);

fscanf (file, "%f", &dat);
posx[i]=dat;

fscanf (file, "%f", &dat);
posy[i]=dat;
printf("%f\n",posy[i]);
fscanf (file, "%f", &dat);
velx[i]=dat;
fscanf (file, "%f", &dat);
vely[i]=dat;



}
/*Hace rungekutta para todas las particulas y devuelve lasposiciones un tiempo t=5 despues*/
for(i=1;i<242;i++)
 {
if (i!=121)
{
pposx=posx[i];

pposy=posy[i];
pvelx = velx[i];
pvely = vely[i];




resulx = (double)Rungekuttax(pposx,pposy,pvelx,pvely, 5.0, posx[0], posy[0], velx[0], vely[0], posx[121], posy[121], velx[121], vely[121]);
resuly = (double)Rungekuttay(pposx,pposy,pvelx,pvely, 5.0, posx[0], posy[0], velx[0], vely[0], posx[121], posy[121], velx[121], vely[121]);


fprintf(file1,"%f",resulx); 
fprintf(file1,"%s"," "); 
fprintf(file1,"%f",resuly); 
fprintf(file1,"\n"); 
}
}
/*Hace rungekutta para todas las particulas y devuelve lasposiciones un tiempo t=10 despues*/
for(i=1;i<242;i++)
 {

pposx=posx[i];

pposy=posy[i];
pvelx = velx[i];
pvely = vely[i];




resulx = (double)Rungekuttax(pposx,pposy,pvelx,pvely, 10.0, posx[0], posy[0], velx[0], vely[0], posx[121], posy[121], velx[121], vely[121]);
resuly = (double)Rungekuttay(pposx,pposy,pvelx,pvely, 10.0, posx[0], posy[0], velx[0], vely[0], posx[121], posy[121], velx[121], vely[121]);


fprintf(file2,"%f",resulx); 
fprintf(file2,"%s"," "); 
fprintf(file2,"%f",resuly); 
fprintf(file2,"\n"); 

}

/*Hace rungekutta para todas las particulas y devuelve lasposiciones un tiempo t=15 despues*/
for(i=1;i<242;i++)
 {

pposx=posx[i];

pposy=posy[i];
pvelx = velx[i];
pvely = vely[i];




resulx = (double)Rungekuttax(pposx,pposy,pvelx,pvely, 15.0, posx[0], posy[0], velx[0], vely[0], posx[121], posy[121], velx[121], vely[121]);
resuly = (double)Rungekuttay(pposx,pposy,pvelx,pvely, 15.0, posx[0], posy[0], velx[0], vely[0], posx[121], posy[121], velx[121], vely[121]);


fprintf(file3,"%f",resulx); 
fprintf(file3,"%s"," "); 
fprintf(file3,"%f",resuly); 
fprintf(file3,"\n"); 

}

/*Hace rungekutta para todas las particulas y devuelve lasposiciones un tiempo t=20 despues*/
for(i=1;i<242;i++)
 {

pposx=posx[i];

pposy=posy[i];
pvelx = velx[i];
pvely = vely[i];




resulx = (double)Rungekuttax(pposx,pposy,pvelx,pvely, 20.0, posx[0], posy[0], velx[0], vely[0], posx[121], posy[121], velx[121], vely[121]);
resuly = (double)Rungekuttay(pposx,pposy,pvelx,pvely, 20.0, posx[0], posy[0], velx[0], vely[0], posx[121], posy[121], velx[121], vely[121]);


fprintf(file4,"%f",resulx); 
fprintf(file4,"%s"," "); 
fprintf(file4,"%f",resuly); 
fprintf(file4,"\n"); 

}


/*Hace rungekutta para todas las particulas y devuelve lasposiciones un tiempo t=25 despues*/
for(i=1;i<242;i++)
 {

pposx=posx[i];

pposy=posy[i];
pvelx = velx[i];
pvely = vely[i];




resulx = (double)Rungekuttax(pposx,pposy,pvelx,pvely , 25.0, posx[0], posy[0], velx[0], vely[0], posx[121], posy[121], velx[121], vely[121]);
resuly = (double)Rungekuttay(pposx,pposy,pvelx,pvely, 25.0, posx[0], posy[0], velx[0], vely[0], posx[121], posy[121], velx[121], vely[121]);


fprintf(file5,"%f",resulx); 
fprintf(file5,"%s"," "); 
fprintf(file5,"%f",resuly); 
fprintf(file5,"\n"); 

}



/*Cierra los archivos*/

fclose(file1);
fclose(file); 

fclose(file2);
fclose(file3);
fclose(file4);
fclose(file5);
return 0;
}


