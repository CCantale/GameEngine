################################################################################
#                                                                              #
#                                                                              #
#    Makefile                                              by CanTale_Games    #
#                                                                              #
#                                                                              #
################################################################################

NAME		=		../lib/libLEMMEstart.a

CC		=		g++
FLAGS		=		-Wall -Wextra -Werror
INCLS		=		-I../includes

SDLDIR		=		SDL2/lib
SDL_LIBS	=		libSDL2.a libSDL2main.a libSDL2_image.a
SDL		=		$(addprefix $(SDLDIR)/, $(SDL_LIBS))

SRCS		=		init.cpp \
				log/log.cpp \
				deltatime/delta.cpp \
				input.cpp

OBJDIR		=		obj
OBJS		=		$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))



all: $(SDL) $(NAME)

$(SDL):
	@echo Missing SDL2 libraries \(libSDL2.a, libSDL2main, libSDL2_image\)

$(NAME): $(OBJS)
	@mkdir -p tmp
	@cp $(SDLDIR)/libSDL2.a tmp
	@cp $(SDLDIR)/libSDL2main.a tmp
	@cp $(SDLDIR)/libSDL2_image.a tmp
	@cd tmp && \
	ar x libSDL2.a && \
	ar x libSDL2main.a && \
	ar x libSDL2_image.a && \
	cd ..
	@ar rcs $@ $(OBJS) tmp/*.o
	@ranlib $@
	@rm -rf tmp
	@echo Library successfully compiled!

$(OBJS): $(OBJDIR)/%.o: %.cpp
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) $(INCLS) -c $< -o $(addprefix $(OBJDIR)/, $(<:.cpp=.o))

clean:
	@rm -rf $(OBJDIR)

fclean:
	@rm $(NAME)
	@echo Library deleted.

kill:
	@make clean
	@make fclean

re:
	@make kill
	@make

.PHONY: all clean fclean kill re
