default: hello.o hi.o test.o
	echo "Every thing is good!"

%.o: %.c
	cc -Wall -Wextra -Werror $^ -o $@

clean:
	rm *.o