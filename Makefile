
.PHONY: all
all: hello

hello: hello.o

.PHONY: clean
clean:
	rm -rf hello hello.o

