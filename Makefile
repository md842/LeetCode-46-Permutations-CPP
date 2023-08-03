CFLAGS = -std=gnu17 -Wall -O0 -pipe -fno-plt -fPIC
CPPFLAGS = -Wall -O0 -pipe -fno-plt -fPIC

default: permutations_cpp

permutations: permutations.c
	$(CC) $(CFLAGS) permutations.c -o permutations

permutations_cpp: permutations.cpp
	g++ $(CPPFLAGS) permutations.cpp -o permutations

.PHONY: clean
clean:
	rm -f permutations
