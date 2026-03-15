CC      = clang
AR      = ar
RM      = rm -f

CFLAGS  = -Wall -Wextra -Werror -Iinclude
ASFLAGS = -Iinclude
ARFLAGS = rcs

SRC_C = \
	src/stdio/printf.c \
	src/string/memcpy.c \
	src/string/strcat.c \
	src/string/strcmp.c \
	src/string/strcpy.c \
	src/string/strlen.c \
	src/ctype/isalnum.c \
	src/unistd/write.c

SRC_S = \
	src/sys/sys_close.S \
	src/sys/sys_exit.S \
	src/sys/sys_nanosleep.S \
	src/sys/sys_open.S \
	src/sys/sys_read.S \
	src/sys/sys_write.S

OBJ_C = $(SRC_C:src/%.c=obj/%.o)
OBJ_S = $(SRC_S:src/%.S=obj/%.o)
OBJ   = $(OBJ_C) $(OBJ_S)

LIB = libogc.a

TEST_SRC = tests/test_main.c
TEST_BIN = ogc

all: $(LIB)

$(LIB): $(OBJ)
	$(AR) $(ARFLAGS) $@ $(OBJ)

obj/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

obj/%.o: src/%.S
	@mkdir -p $(dir $@)
	$(CC) $(ASFLAGS) -c $< -o $@

test: $(LIB) $(TEST_SRC)
	$(CC) $(CFLAGS) $(TEST_SRC) $(LIB) -o $(TEST_BIN)

clean:
	$(RM) -r obj

fclean: clean
	$(RM) $(LIB) $(TEST_BIN)

re: fclean all

.PHONY: all test clean fclean re
