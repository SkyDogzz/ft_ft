CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3
LDFLAGS = $(LIBFT_DIR)/libft.a -fsanitize=address -g3

_END    = $(shell printf "\033[0m")
_BOLD   = $(shell printf "\033[1m")
_CYAN   = $(shell printf "\033[36m")
_BLUE   = $(shell printf "\033[34m")

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include
LIBFT_DIR = ../..

SRC_FILES = main.c

OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
INC_FILES = include/btree.h

NAME = test_btree

all: libft $(NAME)
	@echo "$(_CYAN)[BUILD COMPLET]$(_END) $(NAME) est prêt !"

run: all
	@echo "$(_CYAN)[TESTING $(NAME)]$(_END)"
	@./$(NAME)

libft: $(LIBFT_DIR)/libft.a

$(LIBFT_DIR)/libft.a:
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJ_FILES)
	@$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) 
	@echo "$(_CYAN)[LINKING]$(_END) $(NAME) est créé !"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_FILES)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(_CYAN)[COMPILATION]$(_END) Création de l'objet : $@"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(_BLUE)[CLEAN]$(_END) Suppression des fichiers objets."

fclean: clean
	@rm -f $(NAME)
	@echo "$(_BLUE)[FCLEAN]$(_END) Suppression de $(NAME)"

re: fclean all

lint:
	cppcheck $(SRC_DIR) --enable=all --suppress=unusedFunction \
		--suppress=variableScope --suppress=missingIncludeSystem \
		2>&1 > /dev/null

.PHONY: all clean fclean re
