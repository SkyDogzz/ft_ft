CC = cc
CFLAGS = -Wall -Wextra -Werror -std=c99 -MMD

_END    = $(shell printf "\033[0m")
_BOLD   = $(shell printf "\033[1m")
_CYAN   = $(shell printf "\033[36m")
_BLUE   = $(shell printf "\033[34m")

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include
LOG_DIR = log

SRC_CHAR_DIR = char
SRC_CHAR = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c \
		   ft_isprint.c ft_isspace.c ft_isupper.c ft_tolower.c ft_toupper.c

SRC_CONVERT_DIR = convert
SRC_CONVERT = ft_atoi.c ft_itoa.c

SRC_FD_DIR = fd
SRC_FD = ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c

SRC_MEMORY_DIR = memory
SRC_MEMORY = ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			 ft_memset.c

SRC_STR_DIR = str
SRC_STR = ft_strchr.c ft_strdup.c ft_strlen.c ft_strncmp.c ft_strrchr.c

SRC_LIBFT = $(addprefix $(SRC_STR_DIR)/, $(SRC_STR)) \
			$(addprefix $(SRC_MEMORY_DIR)/, $(SRC_MEMORY)) \
			$(addprefix $(SRC_CONVERT_DIR)/, $(SRC_CONVERT)) \
			$(addprefix $(SRC_CHAR_DIR)/, $(SRC_CHAR)) \
			$(addprefix $(SRC_FD_DIR)/, $(SRC_FD))

OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(SRC_LIBFT:.c=.o))
DEP_FILES = $(OBJ_FILES:.o=.d)

NAME = libft.a

all: ascii $(NAME)
	@echo "$(_CYAN)[BUILD COMPLET]$(_END) $(NAME) est prêt !"

$(NAME): $(OBJ_FILES)
	@ar rcs $@ $^
	@echo "$(_CYAN)[ARCHIVE]$(_END) Ajout des fichiers objets dans $(_BOLD)$(NAME)$(_END)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(_CYAN)[COMPILATION]$(_END) Création de l'objet : $(_BOLD)$@$(_END)"

-include $(DEP_FILES)

clean:
	@rm -rf $(LOG_DIR)
	@rm -rf $(OBJ_DIR)
	@echo "$(_BLUE)[CLEAN]$(_END) Suppression des fichiers objets."

fclean: clean
	@rm -f $(NAME)
	@echo "$(_BLUE)[FCLEAN]$(_END) Suppression de l'archive $(NAME)."

re: fclean all

ascii:
	@echo $(_CYAN)$(_BOLD)
	@echo " _      _____ ______ ______  _____ " 
	@echo "| |    |_   _|| ___ \|  ___||_   _|"
	@echo "| |      | |  | |_/ /| |_     | |  " 
	@echo "| |      | |  | ___ \|  _|    | |  " 
	@echo "| |____ _| |_ | |_/ /| |      | |  " 
	@echo "\_____/ \___/ \____/ \_|      \_/  " 
	@echo $(_END)

lint:
	@mkdir -p $(LOG_DIR)
	@cppcheck --enable=all --inconclusive --std=c99 -I $(INC_DIR) $(SRC_DIR) \
	--suppress=unusedFunction --suppress=unusedVariable \
	--suppress=variableScope --suppress=missingIncludeSystem \
	--check-level=exhaustive --suppress=unmatchedSuppression \
	--suppress=shiftTooManyBitsSigned \
	--suppress=checkersReport 2> $(LOG_DIR)/lint_errors.log
	@echo "$(_CYAN)Résultats de cppcheck enregistrés dans $(LOG_DIR)/lint_errors.log$(_END)"

.PHONY: all clean fclean re ascii lint
