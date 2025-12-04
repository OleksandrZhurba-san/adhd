CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -g -O0

TARGET = build/main

SRC_DIR = src
OBJ_DIR = obj

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

all: $(TARGET)


$(TARGET): $(OBJ)
	@mkdir -p build
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(OBJ_DIR) $(TARGET)


.PHONY: all run clean
