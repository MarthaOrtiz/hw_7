a.out: IC1.h evolve.h graficas

IC1.h: IC1.c
	cc IC1.c -lm

evolve.h: evolve.c
	cc evolve.c -lm

graficas: IC1.h evolve.h
	python plots.py

clean:
	rm -f*.h
	rm -f a.out





