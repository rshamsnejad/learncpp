CC=g++
CFLAGS=-Wall -Wextra -Werror -std=c++11

SRCS = $(wildcard *.cpp)

PROGS = $(patsubst %.cpp,%,$(SRCS))

all: $(PROGS)

%: %.cpp

	$(CC) $(CFLAGS)  -o $@ $<
