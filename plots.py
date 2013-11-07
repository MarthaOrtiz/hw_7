import numpy as np
import matplotlib.pyplot as plot
from pylab import *

datos= loadtxt('resultados.txt',delimiter=' ')
plot(datos[:,1],datos[:,2],'ko')
plt.show()


datos1= loadtxt('resultados1.txt',delimiter=' ')
plot(datos1[:,0],datos1[:,1],'ko')
plt.show()

datos2= loadtxt('resultados2.txt',delimiter=' ')
plot(datos2[:,0],datos2[:,1],'ko')
plt.show()

datos3= loadtxt('resultados3.txt',delimiter=' ')
plot(datos3[:,0],datos3[:,1],'ko')
plt.show()

datos4= loadtxt('resultados4.txt',delimiter=' ')
plot(datos4[:,0],datos4[:,1],'ko')
plt.show()

datos5= loadtxt('resultados5.txt',delimiter=' ')
plot(datos5[:,0],datos5[:,1],'ko')
plt.show()

