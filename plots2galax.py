import numpy as np
import matplotlib.pyplot as plot
from pylab import *

datos= loadtxt('resultados.txt',delimiter=' ')
plt.plotfile('resultados.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos[:,1],datos[:,2],'ko')
plt.show()


datos1= loadtxt('resultados1.txt',delimiter=' ')
plt.plotfile('resultados1.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos1[:,0],datos1[:,1],'ko')
plt.show()

datos2= loadtxt('resultados2.txt',delimiter=' ')
plt.plotfile('resultados2.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos2[:,0],datos2[:,1],'ko')
plt.show()

datos3= loadtxt('resultados3.txt',delimiter=' ')
plt.plotfile('resultados3.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos3[:,0],datos3[:,1],'ko')
plt.show()

datos4= loadtxt('resultados4.txt',delimiter=' ')
plt.plotfile('resultados4.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos4[:,0],datos4[:,1],'ko')
plt.show()

datos5= loadtxt('resultados5.txt',delimiter=' ')
plt.plotfile('resultados5.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos5[:,0],datos5[:,1],'ko')
plt.show()

datos6= loadtxt('dosgalaxias1.txt',delimiter=' ')
plt.plotfile('dosgalaxias1.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos6[:,0],datos6[:,1],'ko')
plt.show()

datos7= loadtxt('dosgalaxias2.txt',delimiter=' ')
plt.plotfile('dosgalaxias2.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos7[:,0],datos7[:,1],'ko')
plt.show()

datos8= loadtxt('dosgalaxias3.txt',delimiter=' ')
plt.plotfile('dosgalaxias3.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos8[:,0],datos8[:,1],'ko')
plt.show()

datos9= loadtxt('dosgalaxias4.txt',delimiter=' ')
plt.plotfile('dosgalaxias4.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos9[:,0],datos9[:,1],'ko')
plt.show()

datos10= loadtxt('dosgalaxias5.txt',delimiter=' ')
plt.plotfile('dosgalaxias5.txt', delimiter=' ', cols=(0, 1), 
             names=('Tiempo (mil millones de anos luz)', 'Distancia (kpc)'), marker='o')
plot(datos10[:,0],datos10[:,1],'ko')
plt.show()
