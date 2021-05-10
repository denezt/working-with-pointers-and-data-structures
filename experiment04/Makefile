CC=gcc
CFLGS=-w -o
PROGNAME=pointer_to_pointer2

all: clean compile test
	@printf "Finished, build application.\n"

clean:
	@printf "Removing, older application $(PROGNAME)...\n"
	@find . -type f -name $(PROGNAME) -delete

compile:
	@printf "Compiling, source code $(PROGNAME)...\n"
	@$(CC) $(PROGNAME).c $(CFLGS) $(PROGNAME) -lpthread

test:
	@printf "Testing, application $(PROGNAME)...\n"
	@./$(PROGNAME)
