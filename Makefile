NAME1 = server
NAME2 = client
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all:
			@make -C libft
			${CC} ${CFLAGS} server.c -I includes -L./libft -lft -o ${NAME1}
			${CC} ${CFLAGS} client.c -I includes -L./libft -lft -o ${NAME2}
			@echo "\033[33;31mCOMPILED\t\t\tCONGRATS"

%.o : %.c
			${CC} %(CFLAGS) -I libft -I includes -c -o $@
clean:
			${MAKE} clean -C libft
			@echo "\033[33;34mCLEAN !\t\t\t\tBUT YOU CAN DO BETTER"
fclean:		clean
			${MAKE} fclean -C libft
			rm -f ${NAME1}
			rm -f ${NAME2}
			@echo "\033[33;32mALL CLEAN !\t\t\tYOU'RE VERY PROPER"
re:			fclean all
			@echo "\033[33;36mRECOMPILED !\t\t\tIT'S WORK NOW ?"
.PHONY:		all fclean clean re
