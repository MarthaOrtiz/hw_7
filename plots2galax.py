import numpy as np
import matplotlib.pyplot as plot
from pylab import *

datos= loadtxt('resultados.txt',delimiter=' ')
plot(datos[:,1],datos[:,2],'ko')
plt.show()

datos6= loadtxt('dosgalaxias1.txt',delimiter=' ')

plot(datos6[:,0],datos6[:,1],'ko')
plt.show()

datos7= loadtxt('dosgalaxias2.txt',delimiter=' ')

plot(datos7[:,0],datos7[:,1],'ko')
plt.show()

datos8= loadtxt('dosgalaxias3.txt',delimiter=' ')

plot(datos8[:,0],datos8[:,1],'ko')
plt.show()

datos9= loadtxt('dosgalaxias4.txt',delimiter=' ')
plot(datos9[:,0],datos9[:,1],'ko')
plt.show()

datos10= loadtxt('dosgalaxias5.txt',delimiter=' ')
plot(datos10[:,0],datos10[:,1],'ko')
plt.show()
