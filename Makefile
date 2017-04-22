PROG=ku
CXX = gcc -O2 -Wall

all: clean $(PROG)

$(PROG): $(PROG).o
	$(CXX) $(PROG).c -o $(PROG)

clean:
	rm -f *.o $(PROG)
