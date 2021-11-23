# Name of the project
PROJECT_NAME = Oskar

# Output directory
BUILD = build

# All source code files
SRC = src/display.c\
    src/gameplay.c\
    src/main.c\
    src/rulebook.c

# All test source files
TEST_SRC = src/display.c\
test/test_display.c\
unity/unity.c\
src/gameplay.c\
test/test_gameplay.c\
src/rulebook.c\
test/test_rulebook.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all


all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
	
    