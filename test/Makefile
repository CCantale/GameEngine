################################################################################
#                                                                              #
#                                                                              #
#    Makefile                                              by CanTale_Games    #
#                                                                              #
#                                                                              #
################################################################################

NAME		=		test

CC		=		g++
FLAGS		=		-Wall -Wextra -Werror
INCLS		=		-I../includes
LINKS		=		-L../lib -lLEMMEstart -lpthread -ldl

SRCS		=		test.cpp

OBJDIR		=		test_obj
OBJS		=		$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

GAME_ENGINE	=		../lib/libGameEngine.a



all: $(GAME_ENGINE) $(NAME)


$(GAME_ENGINE):
	@make -C ../srcs

$(NAME): $(OBJS)
	@$(CC) $^ -o $(NAME) $(LINKS)
	@echo test successfully compiled!

$(OBJS): $(OBJDIR)/%.o: %.cpp
	@mkdir -p $(@D)
	@$(CC) $(INCLS) $(FLAGS) $(INCL) -c $< -o $(addprefix $(OBJDIR)/, $(<:.cpp=.o))

clean:
	@rm -rf $(OBJDIR)

fclean:
	@rm $(NAME)
	@echo test deleted.

kill:
	@make clean
	@make fclean

re:
	@make kill
	@make

r:
	@make
	@./$(NAME)

.PHONY: all clean fclean kill re

