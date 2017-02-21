IDIR = ../hfiles
CC=g++
CFLAGS=-I$(IDIR)

ODIR = ../obj

_DEPS = basic_class.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = test_basic_class.o basic_class.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test_basic_class: $(OBJ)
	g++ -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ test_basic_class
