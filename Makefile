clean :
	rm *.o *.out *.a
all :
	gcc -c ft_strlen.c ft_putchar.c ft_putstr.c ft_itoa.c
	ar rcs libft.a ft_strlen.o ft_putchar.o ft_putstr.o ft_itoa.o
	gcc mai.c libft.a -I. 
re : clean all