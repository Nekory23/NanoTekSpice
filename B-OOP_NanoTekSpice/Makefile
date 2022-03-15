## Var def ##
SHELL		=	/bin/sh
CC			=	gcc
CPP			=	g++
RM			=	rm -f
#############

## Sources ##
MAIN		=	src/Main.cpp

BIN_SRC		=	src/Parser.cpp				\
				src/Start.cpp				\
				src/Error.cpp				\
				src/Factory.cpp				\
				src/Circuit.cpp				\
				src/Shell.cpp				\
				src/Chipsets/C2716.cpp		\
				src/Chipsets/C4001.cpp		\
				src/Chipsets/C4008.cpp		\
				src/Chipsets/C4011.cpp		\
				src/Chipsets/C4013.cpp		\
				src/Chipsets/C4017.cpp		\
				src/Chipsets/C4030.cpp		\
				src/Chipsets/C4040.cpp		\
				src/Chipsets/C4069.cpp		\
				src/Chipsets/C4071.cpp		\
				src/Chipsets/C4081.cpp		\
				src/Chipsets/C4094.cpp		\
				src/Chipsets/C4512.cpp		\
				src/Chipsets/C4514.cpp		\
				src/Chipsets/C4801.cpp		\
				src/Chipsets/Clock.cpp		\
				src/Chipsets/False.cpp		\
				src/Chipsets/Input.cpp		\
				src/Chipsets/Output.cpp		\
				src/Chipsets/True.cpp		\
				src/Gates/GateSimple.cpp	\
				src/Gates/GateMedium.cpp	\
				src/Gates/GateAdvanced.cpp	\
				src/Gates/GateUndefined.cpp	\

TEST_SRC	=	tests/test_gates.cpp

INC			=	-I./include/
#############

##	Obj	   ##
MAIN_OBJ	=	$(MAIN:.cpp=.o)
SRC_OBJ		=	$(BIN_SRC:.cpp=.o)
TEST_OBJ	=	$(TEST_SRC:.cpp=.o)
#############

##	Flags  ##
CFLAGS		=	-Wall -Wextra -Werror
CPPFLAGS	=	$(INC)
LDFLAGS		=	
#############

##	Names  ##
BIN			=	nanotekspice
TEST_BIN	=	unit_tests
#############

##	Rules  ##
all:	$(MAIN_OBJ) $(SRC_OBJ)
	$(CPP) -o $(BIN) $(MAIN_OBJ) $(SRC_OBJ) $(CFLAGS) $(CPPFLAGS)

# Debug
debug:	fclean
debug:	CFLAGS += -g3 -DDEBUG
debug:	all

# Unit Test
tests_run:	fclean
tests_run:	CFLAGS += --coverage
tests_run:	LDFLAGS += -lcriterion -DUNIT_TEST
tests_run:	$(SRC_OBJ) $(TEST_OBJ)
	$(CPP) -o $(TEST_BIN) $(BIN_SRC) $(TEST_SRC) $(LDFLAGS) $(CFLAGS) $(CPPFLAGS)
	./$(TEST_BIN)

# Coverage
coverage:
	gcovr -b --exclude-directories tests
	gcovr -r . --exclude-directories tests

# Clear
clean:
	@$(RM) $(MAIN_OBJ)
	@$(RM) $(SRC_OBJ)
	@$(RM) $(TEST_OBJ)

fclean: clean
	@$(RM) $(BIN)
	@$(RM) $(TEST_BIN)
	@$(RM) *.gc*

# re
re : fclean all clean

# PHONY
.PHONY: all debug tests_run coverage clean fclean re