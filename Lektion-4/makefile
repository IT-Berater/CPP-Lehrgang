#
# Maktefile für den CPP-Lehrgang
#
# Thomas Wenzlaff http://www.wenzlaff.de 
#

# Der CPP Compiler
CXX=g++
# Die Quellcode Dateien
SRCS=programm-4.cpp Temperatur.cpp
OBJS=$(subst .cc,.o,$(SRCS))

# Der Programmname der erzeugt wird
all: start-prog

start-prog: $(OBJS)
	$(CXX) $(LDFLAGS) -o start-prog $(OBJS) $(LDLIBS) 

start-prog.o: Temperatur.cpp Temperatur.h programm-4.cpp

# für das löschen mit make clean
clean:
	$(RM) start-prog

distclean: clean

