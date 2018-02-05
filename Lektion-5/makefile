#
# Makefile für den CPP-Lehrgang
#
# Thomas Wenzlaff http://www.wenzlaff.de 
#

# Der Programm Name
PRGNAME=start-prog
# Der CPP Compiler
CXX=g++
# Flags
LDFLAGS=-Wall -ansi
# Die Quellcode Dateien
SRCS=programm-4.cpp Temperatur.cpp
OBJS=$(subst .cc,.o,$(SRCS))
# Der Programmname der erzeugt wird
all: $(PRGNAME)

start-prog: $(OBJS)
	$(CXX) $(LDFLAGS) -o $(PRGNAME) $(OBJS) $(LDLIBS) 

# für das Löschen mit make clean
clean:
	$(RM) $(PRGNAME)

distclean: clean
