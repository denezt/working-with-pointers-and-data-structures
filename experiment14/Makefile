CC=gcc
CFLGS=-w -o
PROGNAME=dynamic_memory_allocator

all: clean compile test
	@printf "Finished, build application.\n"

clean:
	@printf "Removing, older application $(PROGNAME)...\n"
	@find . -type f -name $(PROGNAME) -delete

compile:
	@printf "Compiling, source code $(PROGNAME)...\n"
	@$(CC) $(PROGNAME).c $(CFLGS) $(PROGNAME) -lpthread
debug:
	@printf "Compiling, source code $(PROGNAME)...\n"
	@$(CC) $(PROGNAME).c -o $(PROGNAME) -lpthread -v
test:
	@printf "Testing, application $(PROGNAME)...\n"
	@./$(PROGNAME)
