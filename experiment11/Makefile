CC=gcc
CPP=g++
CFLGS=-w -o
PROGNAME=ptrs_and_dyn_mem


all: clean compile test
	@printf "Finished, build application.\n"

clean:
	@printf "Removing, older application $(PROGNAME)...\n"
	@find . -type f -name $(PROGNAME) -delete

compile:
	@printf "Compiling, source code $(PROGNAME)...\n"
	@$(CC) $(PROGNAME).c $(CFLGS) $(PROGNAME) -lpthread -v
	@$(CPP) $(PROGNAME)2.cpp $(CFLGS) $(PROGNAME)2 -lpthread -fpermissive
debug:
	@printf "Compiling, source code $(PROGNAME)...\n"
	@$(CC) $(PROGNAME).c -o $(PROGNAME) -lpthread
test:
	@printf "Testing, application $(PROGNAME)...\n"
	@./$(PROGNAME)
	@./$(PROGNAME)2
