fclean:
	cc -c fclean.c

build:
	gcc -Wall -Werror -Wextra rush02.c header.h main.c dict_build.c dict_change.c

free:
	cc -c free.c
