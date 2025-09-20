clean :
	rm *.o *.out *.a
all :
	gcc -c *.c
	ar rcs libft.a *.o
	gcc main.c libft.a -I. 
re : clean all