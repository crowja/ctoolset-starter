RM = /bin/rm

all:
	@echo "Limited purpose Makefile. Try 'make clean' or 'make indent' ..."

indent:
	@indent $(INDENT_FLAGS) main.c
	@indent $(INDENT_FLAGS) main.h
	@indent $(INDENT_FLAGS) XXX-main.c
	@indent $(INDENT_FLAGS) XXX-main.h
	@indent $(INDENT_FLAGS) XXX-options.c
	@indent $(INDENT_FLAGS) XXX-options.h

clean:
	@$(RM) -f a.out *.o *~
