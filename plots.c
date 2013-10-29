from pylab import *

ins = open( "resultados.txt", "r" )
array = []
points = []
for line in ins:
    array.append( line )
for s in array:
    
for (x, y) in points:
    plot(x, y, '+')
show() 
