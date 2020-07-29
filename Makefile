NAME = libfts.a
TEST_BINARY = test
TEST_FILE = test.c
INCLUDES_DIR = ./includes
COMPILATION = nasm -f macho64
SRCS_DIR = ./srcs

PART1_DIR =		part1
PART1_FILES =	ft_bzero.o\
				ft_isalnum.o\
				ft_isalpha.o\
				ft_isascii.o\
				ft_isdigit.o\
				ft_isprint.o\
				ft_puts.o\
				ft_strcat.o\
				ft_tolower.o\
				ft_toupper.o

PART2_DIR =		part2
PART2_FILES =	ft_memcpy.o\
				ft_memset.o\
				ft_strdup.o\
				ft_strlen.o

FT_CAT_DIR =	ft_cat
FT_CAT_FILES = 	ft_cat.o

BONUS_DIR =		bonus
BONUS_FILES=	ft_islower.o\
				ft_isupper.o\
				ft_lstadd.o\
				ft_lstdel.o\
				ft_lstmap.o\
				ft_putnbr.o\
				ft_strcmp.o\
				ft_strrev.o

OBJS_DIR =	./objs

ALL_DIR =	$(OBJS_DIR)\
			$(OBJS_DIR)/$(PART1_DIR)\
			$(OBJS_DIR)/$(PART2_DIR)\
			$(OBJS_DIR)/$(FT_CAT_DIR)\
			$(OBJS_DIR)/$(BONUS_DIR)


ALL_OBJ=	$(PART1_FILES:%.o=$(OBJS_DIR)/$(PART1_DIR)/%.o)\
			$(PART2_FILES:%.o=$(OBJS_DIR)/$(PART2_DIR)/%.o)\
			$(FT_CAT_FILES:%.o=$(OBJS_DIR)/$(FT_CAT_DIR)/%.o)\
			$(BONUS_FILES:%.o=$(OBJS_DIR)/$(BONUS_DIR)/%.o)


all: $(NAME)

all_dir: $(ALL_DIR)

$(ALL_DIR):
	mkdir -p $@

%.s:

$(NAME): $(ALL_DIR) $(ALL_OBJ) $(TEST_FILE)
	ar rc $(NAME) $(ALL_OBJ)
	ranlib $(NAME)
	clang -o $(TEST_BINARY) $(TEST_FILE) $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.s
	$(COMPILATION) $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) test

re: fclean
	$(MAKE)

.PHONY: all all_dir clean fclean re
