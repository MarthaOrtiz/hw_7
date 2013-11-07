
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define USAGE "./a.out n_times value_a value_b"

#define pi 3.141592 
#define GM 4498949

int main(int argc, char** argv){

float posx [121];
float posy [121];
float velx [121];
float vely [121];

float xo=atof(argv[1]);
float yo=atof(argv[2]);
float vxo=atof(argv[3]);
float vyo=atof(argv[4]);
int i;

FILE *file; 
file = fopen("resultados.txt","a+"); 
posx[0]=xo;
posy[0]=yo;
velx[0]=vxo;
vely[0]=vyo;
	fprintf(file,"%f",posx[0]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",posy[0]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",velx[0]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",vely[0]); 
	fprintf(file,"\n"); 
for(i=1;i<121;i++)
 {
if(i<13){
	posx[i]=10*sin(i*pi/6)+xo;
	posy[i]=10*cos(i*pi/6)+yo;
	velx[i]=pow(GM/10,1/2) * cos(i*pi/6) +vxo;
	vely[i]=-pow(GM/10,1/2) * sin(i*pi/6) +vyo;
	
	fprintf(file,"%f",posx[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",posy[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",velx[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",vely[i]); 
	fprintf(file,"\n"); 
}
else if(i<31){
	posx[i]=20*sin(i*pi/9)+xo;
	posy[i]=20*cos(i*pi/9)+yo;
	velx[i]=pow(GM/20,1/2) * cos(i*pi/9) +vxo;
	vely[i]=-pow(GM/20,1/2) * sin(i*pi/9) +vyo;
	fprintf(file,"%f",posx[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",posy[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",velx[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",vely[i]); 
	fprintf(file,"\n"); 
}
else if(i<55){
	posx[i]=30*sin(i*pi/12)+xo;
	posy[i]=30*cos(i*pi/12)+yo;
	velx[i]=pow(GM/30,1/2) * cos(i*pi/12) +vxo;
	vely[i]=-pow(GM/30,1/2) * sin(i*pi/12) +vyo;
	fprintf(file,"%f",posx[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",posy[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",velx[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",vely[i]); 
	fprintf(file,"\n"); 
}
else if(i<85){
	posx[i]=40*sin(i*pi/15)+xo;
	posy[i]=40*cos(i*pi/15)+yo;
	velx[i]=pow(GM/40,1/2) * cos(i*pi/15) +vxo;
	vely[i]=-pow(GM/40,1/2) * sin(i*pi/15) +vyo;
	fprintf(file,"%f",posx[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",posy[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",velx[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",vely[i]); 
	fprintf(file,"\n"); 
}

else {
	posx[i]=50*sin(i*pi/18)+xo;
	posy[i]=50*cos(i*pi/18)+yo;
	velx[i]=pow(GM/50,1/2) * cos(i*pi/18) +vxo;
	vely[i]=-pow(GM/50,1/2) * sin(i*pi/18) +vyo;
	fprintf(file,"%f",posx[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",posy[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",velx[i]); 
	fprintf(file,"%s"," "); 
	fprintf(file,"%f",vely[i]); 
	fprintf(file,"\n"); 
}
}

	

fclose(file); 
return 0;
}







