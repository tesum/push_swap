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
			commands/sa.c			\
			commands/sb.c			\
			commands/ss.c			\
			commands/pa.c			\
			commands/pb.c			\
			commands/ra.c			\
			commands/rb.c			\
			commands/rr.c			\
			commands/rra.c			\
			commands/rrb.c			\
			commands/rrr.c			\

SRCS_CH	=	srcs/checker.c					\
			srcs/gnl/get_next_line.c		\
			srcs/gnl/get_next_line_utils.c	\
			srcs/small_sort.c				\
			srcs/sort.c						\
			srcs/init.c						\
			srcs/sorting.c					\
			srcs/find_functions.c			\
			srcs/check_input.c				\
			srcs/utils.c					\
			srcs/sort_b.c					\
			srcs/free.c						\
			srcs/command_list.c					\
			commands/sa.c					\
			commands/sb.c					\
			commands/ss.c					\
			commands/pa.c					\
			commands/pb.c					\
			commands/ra.c					\
			commands/rb.c					\
			commands/rr.c					\
			commands/rra.c					\
			commands/rrb.c					\
			commands/rrr.c					\

FLAGS	=	-Wall -Wextra -Werror

all		:	$(NAME) $(SRCS)
			make alll -C ./libft
			cp ./libft/libft.a .
			gcc $(FLAGS) -o $(NAME) libft.a $(SRCS) -I.

$(NAME)	:	$(OBJ)

checker	:	$(NAME_CH) $(SRCS_CH)
			gcc $(FLAGS) -o $(NAME_CH) libft.a  $(SRCS_CH) -I.

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)
			rm -f libft.a

re		:	fclean all

.PHONY	:	all clean fclean re