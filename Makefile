CXX = g++


CXXFLAGS = -std=c++11 -Wall


INCLUDE_DIR = include
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin


SRCS = $(wildcard $(SRC_DIR)/*.cpp)


OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)


TARGET = $(BIN_DIR)/juego


all: $(TARGET)


$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
    $(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@


$(TARGET): $(OBJS)
    $(CXX) $(CXXFLAGS) $^ -o $@


clean:
    $(RM) -r $(BUILD_DIR)/* $(BIN_DIR)/*


run:
    ./$(TARGET)


play: all run


.PHONY: all clean run play
