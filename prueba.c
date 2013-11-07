#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define USAGE "./a.out n_times value_a value_b"

#define pi 3.141592 
#define GM 4498949



float Rungekuttax(float posx, float posy, float velx, float vely, float t){
  /*hace rungekuta 4 orden cambiandole los valores a posx[j] posy[j] velx[j] y vely[j] */


float k1x1=velx;
float k1x2=GM * posx / (pow(pow(posx,2) + pow(posy,2),3 / 2));
float k1y1=vely;
float k1y2=GM * posy / (pow(pow(posx,2) + pow(posy,2),3 / 2));
 
float k2x1=velx + (t * k1x2 / 2);
float k2x2=GM * (posx + t * k1x1 / 2) / pow(pow(posx + t * k1y1 / 2, 2) + pow(posy + t * k1x1 / 2,2),3 / 2);
float k2y1=vely + (t * k1y2 / 2);
float k2y2=GM * (posy + t * k1y1 / 2) / pow(pow(posx + t * k1y1 / 2, 2) + pow(posy + t * k1x1 / 2,2),3 / 2);

float k3x1=velx + (t * k2x2 / 2);
float k3x2=GM * (posx + t * k2x1 / 2) / pow(pow(posx + t * k2y1 / 2, 2) + pow(posy + t * k2x1 / 2,2),3 / 2);
float k3y1=vely + (t * k2y2 / 2);
float k3y2=GM * (posy + t * k2y1 / 2) / pow(pow(posx + t * k2y1 / 2, 2) + pow(posy + t * k2x1 / 2,2),3 / 2);

float k4x1=velx + t * k3x2;
float k4x2=GM * (posx + t * k3x1) / pow(pow(posx + t * k3y1 / 2, 2) + pow(posy + t * k3x1 / 2,2),3 / 2);
float k4y1=vely + t * k3y2;
float k4y2=GM * (posy + t * k3y1) / pow(pow(posx + t * k3y1 / 2, 2) + pow(posy + t * k3x1 / 2,2),3 / 2);

float kx1=(k1x1 + 2 * k2x1 + 2 * k3x1 + k4x1) / 6;
float kx2=(k1x2 + 2 * k2x2 + 2 * k3x2 + k4x2) / 6;
float ky1=(k1y1 + 2 * k2y1 + 2 * k3y1 + k4y1) / 6;
float ky2=(k1y2 + 2 * k2y2 + 2 * k3y2 + k4y2) / 6;




return posx + kx1 * t;



 
}

float Rungekuttay(double posx, double posy, double velx, double vely, float t){
  /*hace rungekuta 4 orden cambiandole los valores a posx[j] posy[j] velx[j] y vely[j] */


float k1x1=velx;
float k1x2=GM * posx / (pow(pow(posx,2) + pow(posy,2),3 / 2));
float k1y1=vely;
float k1y2=GM * posy / (pow(pow(posx,2) + pow(posy,2),3 / 2));
 
float k2x1=velx + (t * k1x2 / 2);
float k2x2=GM * (posx + t * k1x1 / 2) / pow(pow(posx + t * k1y1 / 2, 2) + pow(posy + t * k1x1 / 2,2),3 / 2);
float k2y1=vely + (t * k1y2 / 2);
float k2y2=GM * (posy + t * k1y1 / 2) / pow(pow(posx + t * k1y1 / 2, 2) + pow(posy + t * k1x1 / 2,2),3 / 2);

float k3x1=velx + (t * k2x2 / 2);
float k3x2=GM * (posx + t * k2x1 / 2) / pow(pow(posx + t * k2y1 / 2, 2) + pow(posy + t * k2x1 / 2,2),3 / 2);
float k3y1=vely + (t * k2y2 / 2);
float k3y2=GM * (posy + t * k2y1 / 2) / pow(pow(posx + t * k2y1 / 2, 2) + pow(posy + t * k2x1 / 2,2),3 / 2);

float k4x1=velx + t * k3x2;
float k4x2=GM * (posx + t * k3x1) / pow(pow(posx + t * k3y1 / 2, 2) + pow(posy + t * k3x1 / 2,2),3 / 2);
float k4y1=vely + t * k3y2;
float k4y2=GM * (posy + t * k3y1) / pow(pow(posx + t * k3y1 / 2, 2) + pow(posy + t * k3x1 / 2,2),3 / 2);

float kx1=(k1x1 + 2 * k2x1 + 2 * k3x1 + k4x1) / 6;
float kx2=(k1x2 + 2 * k2x2 + 2 * k3x2 + k4x2) / 6;
float ky1=(k1y1 + 2 * k2y1 + 2 * k3y1 + k4y1) / 6;
float ky2=(k1y2 + 2 * k2y2 + 2 * k3y2 + k4y2) / 6;




return posy + ky1 * t;



 
}




int main(int argc, char** argv){

float posx[121];
float posy[121];
float velx[121];
float vely[121];
char line[80];

float pposx;
float pposy;
float pvelx;
float pvely;

double resulx;
double resuly;


float dat;
int i;

int j;



FILE *file; 
file = fopen("resultados.txt","rt"); 

FILE *file1; 
file1 = fopen("resultados1.txt","a+"); 

FILE *file2; 
file2 = fopen("resultados2.txt","a+"); 
FILE *file3; 
file3 = fopen("resultados3.txt","a+"); 
FILE *file4; 
file4 = fopen("resultados4.txt","a+"); 
FILE *file5; 
file5 = fopen("resultados5.txt","a+"); 



for(i=0;i<121;i++)
 {



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

for(i=1;i<121;i++)
 {
pposx=posx[i];

pposy=posy[i];
pvelx = velx[i];
pvely = vely[i];




resulx = (double)Rungekuttax(pposx,pposy,pvelx,pvely, 5.0);
resuly = (double)Rungekuttay(pposx,pposy,pvelx,pvely, 5.0);


fprintf(file1,"%f",resulx); 
fprintf(file1,"%s"," "); 
fprintf(file1,"%f",resuly); 
fprintf(file1,"\n"); 

}

for(i=1;i<121;i++)
 {
pposx=posx[i];

pposy=posy[i];
pvelx = velx[i];
pvely = vely[i];




resulx = (double)Rungekuttax(pposx,pposy,pvelx,pvely, 10.0);
resuly = (double)Rungekuttay(pposx,pposy,pvelx,pvely, 10.0);


fprintf(file2,"%f",resulx); 
fprintf(file2,"%s"," "); 
fprintf(file2,"%f",resuly); 
fprintf(file2,"\n"); 

}


for(i=1;i<121;i++)
 {
pposx=posx[i];

pposy=posy[i];
pvelx = velx[i];
pvely = vely[i];




resulx = (double)Rungekuttax(pposx,pposy,pvelx,pvely , 15.0);
resuly = (double)Rungekuttay(pposx,pposy,pvelx,pvely, 15.0);


fprintf(file3,"%f",resulx); 
fprintf(file3,"%s"," "); 
fprintf(file3,"%f",resuly); 
fprintf(file3,"\n"); 

}


for(i=1;i<121;i++)
 {
pposx=posx[i];

pposy=posy[i];
pvelx = velx[i];
pvely = vely[i];




resulx = (double)Rungekuttax(pposx,pposy,pvelx,pvely , 20.0);
resuly = (double)Rungekuttay(pposx,pposy,pvelx,pvely, 20.0);


fprintf(file4,"%f",resulx); 
fprintf(file4,"%s"," "); 
fprintf(file4,"%f",resuly); 
fprintf(file4,"\n"); 

}



for(i=1;i<121;i++)
 {
pposx=posx[i];

pposy=posy[i];
pvelx = velx[i];
pvely = vely[i];




resulx = (double)Rungekuttax(pposx,pposy,pvelx,pvely , 25.0);
resuly = (double)Rungekuttay(pposx,pposy,pvelx,pvely, 25.0);


fprintf(file5,"%f",resulx); 
fprintf(file5,"%s"," "); 
fprintf(file5,"%f",resuly); 
fprintf(file5,"\n"); 

}





fclose(file1);
fclose(file); 

fclose(file2);
fclose(file3);
fclose(file5);
fclose(file5);
return 0;
}


