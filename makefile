IDIR=inc
CC=gcc
CFLAGS=-I$(IDIR) -Wall -pedantic -l sqlite3

ODIR=obj
LDIR=lib

LIBS=-lm

_DEPS = osrs_tracker.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = osrs_tracker.o osrs_db.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

OSRS_Tracker: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
