NAME = fdf
FLAGS = -Wall -Werror -Wextra
SRCS = generate_map_array.c draw.c events.c isometric.c free_map.c window.c handle_file.c bresenham_algo.c handle_img.c \
transform.c setup.c graphics_utils.c handle_errors.c parsing_utils.c
SRCSDEST = $(addprefix ./srcs/, $(SRCS))
OBJ = $(SRCS:.c=.o)
INC = -I /includes/fdf.h /includes/strucs.h
LIBFT = libft.a
LIBFTSRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strrchr.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_nbr_of_digits.c \
ft_power_of.c get_next_line.c ft_isspace.c ft_abs.c
LIBSRCS = $(addprefix ./my_libft/, $(LIBFTSRCS))
LIBOBJ = $(LIBSRCS:.c=.o)
all: $(NAME)

$(NAME):  $(LIBFT) $(SRCSDEST)
	cc $(FLAGS) $(SRCSDEST) main.c -o $(NAME) -L /usr/local/lib -lmlx -framework OpenGl -framework AppKit -L. libft.a
#cc $(FLAGS) $(SRCSDEST) main.c -o $(NAME) -lmlx -lXext -lX11 -L. ./my_libft/libft.a -lm
clean:
	rm -f *.o $(LIBOBJ)

fclean: clean
	rm -f $(NAME) my_libft/$(LIBFT)


make re: fclean all

$(LIBFT):
	cd ./my_libft && make
