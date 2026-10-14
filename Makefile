NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = $(SRC:.c=.o)
# 5. RÈGLE PRINCIPALE (Appelée quand tu tapes juste 'make')
all: $(NAME)

# 6. CRÉATION DE LA LIBFT.A
# ar rcs regroupe tes fichiers .o pour en faire une bibliothèque statique
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# 7. COMPILATION DE CHAQUE .c EN .o
# $< représente le fichier .c et $@ le fichier .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 8. NETTOYAGE DES FICHIERS TEMPORAIRES (.o)
clean:
	rm -f $(OBJS)

# 9. NETTOYAGE COMPLET (les .o ET la libft.a)
fclean: clean
	rm -f $(NAME)

# 10. RECOMPILER TOUT DE ZÉRO
re: fclean all

# 11. SÉCURITÉ POUR ÉVITER LES CONFLITS DE NOMS
.PHONY: all clean fclean re