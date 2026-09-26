VPATH=src
DISTFOLDER=dist
SRCFOLDER=src
CPPFLAGS=-g -std=c++17

test: test.o print.o
	g++ $(CPPFLAGS) $(DISTFOLDER)/test.o $(DISTFOLDER)/print.o -o $(DISTFOLDER)/test

test.o: test.cpp print.h
	g++ $(CPPFLAGS) -c $(SRCFOLDER)/test.cpp -o $(DISTFOLDER)/test.o

print.o: print.cpp print.h
	g++ $(CPPFLAGS) -c $(SRCFOLDER)/print.cpp -o $(DISTFOLDER)/print.o

clean: 
	$(RM) $(DISTFOLDER)/*.o

distclean:
	$(RM) $(DISTFOLDER)/*
