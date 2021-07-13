NAME	=	push_swap
NAME_CH	=	checker

SRCS	=	srcs/main.c				\
			srcs/small_sort.c		\
			srcs/sort.c				\
			srcs/init.c				\
			srcs/sorting.c			\
			srcs/find_functions.c	\
			srcs/check_input.c		\
			srcs/utils.c			\
			srcs/sort_b.c			\
			srcs/free.c				\
			srcs/command_list.c			\
			srcs/commands/sa.c			\
			srcs/commands/sb.c			\
			srcs/commands/ss.c			\
			srcs/commands/pa.c			\
			srcs/commands/pb.c			\
			srcs/commands/ra.c			\
			srcs/commands/rb.c			\
			srcs/commands/rr.c			\
			srcs/commands/rra.c			\
			srcs/commands/rrb.c			\
			srcs/commands/rrr.c			\

SRCS_CH	=	srcs/checker.c				\
			gnl/get_next_line.c			\
			gnl/get_next_line_utils.c	\
			srcs/small_sort.c			\
			srcs/sort.c					\
			srcs/init.c					\
			srcs/sorting.c				\
			srcs/find_functions.c		\
			srcs/check_input.c			\
			srcs/utils.c				\
			srcs/sort_b.c				\
			srcs/free.c					\
			srcs/command_list.c			\
			srcs/commands/sa.c			\
			srcs/commands/sb.c			\
			srcs/commands/ss.c			\
			srcs/commands/pa.c			\
			srcs/commands/pb.c			\
			srcs/commands/ra.c			\
			srcs/commands/rb.c			\
			srcs/commands/rr.c			\
			srcs/commands/rra.c			\
			srcs/commands/rrb.c			\
			srcs/commands/rrr.c			\

FLAGS	=	-Wall -Wextra -Werror -I ./includes

all		:	$(NAME) 

$(NAME):
			@make -s alll -C ./libft
			@cp ./libft/libft.a .
			@cp ./libft/libft.h ./includes
			@gcc $(FLAGS) -o $(NAME) $(SRCS) libft.a
			@echo "PUSH_SWAP CREATED"

checker	:	$(NAME_CH) $(SRCS_CH)
			@gcc $(FLAGS) -o $(NAME_CH) $(SRCS_CH) libft.a
			@echo "CHECKER CREATED"

clean	:
			@rm -f $(OBJ)
			@echo "CLEANED"

fclean	:	clean
			@rm -f $(NAME)
			@rm -f $(NAME_CH)
			@rm -f libft.a

re		:	fclean all

.PHONY	:	all clean fclean re checker