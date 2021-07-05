NAME	=	push_swap
NAME_CH	=	checker

SRCS	=	main.c			\
			small_sort.c	\
			sort.c			\
			init.c			\
			sorting.c		\
			find_functions.c	\
			check_input.c	\
			utils.c			\
			sort_b.c		\
			free.c			\
			command_list.c	\
			commands/sa.c	\
			commands/sb.c	\
			commands/ss.c	\
			commands/pa.c	\
			commands/pb.c	\
			commands/ra.c	\
			commands/rb.c	\
			commands/rr.c	\
			commands/rra.c	\
			commands/rrb.c	\
			commands/rrr.c	\

SRCS_CH	=	checker.c		\
			gnl/get_next_line.c	\
			gnl/get_next_line_utils.c \
			small_sort.c	\
			sort.c			\
			init.c			\
			sorting.c		\
			find_functions.c	\
			check_input.c	\
			utils.c			\
			sort_b.c		\
			free.c			\
			command_list.c	\
			commands/sa.c	\
			commands/sb.c	\
			commands/ss.c	\
			commands/pa.c	\
			commands/pb.c	\
			commands/ra.c	\
			commands/rb.c	\
			commands/rr.c	\
			commands/rra.c	\
			commands/rrb.c	\
			commands/rrr.c	\

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

re		:	fclean all

.PHONY	:	all clean fclean re