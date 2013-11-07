a.out: IC1.h evolve1g.h IC2.h  evolve.h graficas.h

IC1.h: IC_avan.c
	cc IC_avan.c -lm
	./a.out 0 0 0 0 

evolve1g.h: evolve1g.c
	cc evolve1g.c -lm 
	./a.out

IC2.h: IC_avan.c
	cc IC_avan.c -lm
	./a.out 150 200 0 -100

evolve.h: prueba.c
	cc prueba.c -lm 
	./a.out

graficas.h: IC1.h evolve1g.h IC2.h evolve.h
	python plots.py 
	python plots2galax.py


clean:
	rm -f*.h
	rm -f a.out





