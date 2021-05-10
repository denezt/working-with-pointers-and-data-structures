GCC=gcc
CC=clang
CFLGS=-w -o
PROGNAME=pointers_as_function

all: clean compile test
	@printf "Finished, build application.\n"

clean:
	@printf "Removing, older application $(PROGNAME)...\n"
	@find . -type f -name $(PROGNAME) -delete
	@find . -type f -name $(PROGNAME)2 -delete

compile:
	@printf "Compiling, source code $(PROGNAME)...\n"
	@$(CC) $(PROGNAME).c $(CFLGS) $(PROGNAME) -lpthread
	@$(GCC) $(PROGNAME)2.c $(CFLGS) $(PROGNAME)2 -lpthread
debug:
	@printf "Compiling, source code $(PROGNAME)...\n"
	@$(CC) $(PROGNAME).c -o $(PROGNAME) -lpthread -v
	@$(GCC) $(PROGNAME)2.c -o $(PROGNAME)2 -lpthread -v
test:
	@printf "Testing, application $(PROGNAME)...\n"
	@./$(PROGNAME)
	@./$(PROGNAME)2
