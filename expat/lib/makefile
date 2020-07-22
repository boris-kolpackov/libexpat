# Make sure everything compiles.
#
src := xmlparse.c xmlrole.c xmltok.c

CC := gcc
CFLAGS := -Wall -Wextra

# Compile.
#
.PHONY: all
all: $(src:.c=.o)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $<

# Clean.
#
.PHONY: clean
clean:
	rm -f $(src:.c=.o)
