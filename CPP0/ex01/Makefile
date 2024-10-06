NAME = phonebook
BONUS =

SRC =  src/Phonebook.cpp                 \
	   src/Contact.cpp                   \
	   src/main.cpp

INC = includes/Phonebook.hpp               \
	  includes/Contact.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror


OBJS := $(patsubst src/%.c, objs/%.o, ${SRC})

DEPS := $(INC)

GREEN := \033[1;32m
YELLOW := \033[1;33m
CYAN := \033[1;36m
CLR_RMV := \033[0m
RED		:= \033[1;31m

total_files := $(words $(SRC))
current_file := 0
progress := 0

define progress_bar
@$(eval current_file=$(shell echo $$(($(current_file) + 1))))
@$(eval progress=$(shell echo $$(($(current_file) * 100 / $(total_files)))))
@printf "\r$(GREEN)Compiling $(YELLOW)%s$(CLR_RMV)... [%-3d%%] %d/%d $(CYAN)" $< $(progress) $(current_file) $(total_files)
endef

define print_completion
@printf "\n$(GREEN)Compilation of $(YELLOW)$(NAME) $(GREEN)complete ✔️\n$(CLR_RMV)"
endef



.PHONY: all clean fclean nothing nothingb bonus re

all: nothing $(NAME)

bonus: nothing $(BONUS)

re: fclean all

objs/%.o:    src/%.c
	@mkdir -p objs
	@$(CC) $(FLAGS) $(INC) -o $@ -c $<
	@$(call progress_bar)


clean:
	@rm -rf $(OBJS)
	@echo "$(GREEN)Deleting $(YELLOW)$(NAME)$(CLR_RMV) objs ✔️"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(GREEN)Deleting $(YELLOW)$(NAME)$(CLR_RMV) binary ✔️"

$(NAME): $(OBJS)
	@echo "$(YELLOW)Done!$(CLR_RMV)"
	@$(CC) $(FLAGS)  $(OBJS)  $(LIBS) -o $@
	@$(call print_completion)

nothing:
	@mkdir -p objs
	@if [ -f "$(NAME)" ] && [ -z "$$(find $(SRC) -newer $(NAME))" ]; then \
		echo "$(CYAN)Nothing has been updated.$(CLR_RMV)"; \
		fi
.PHONY: all re clean fclean nothing  bonus
