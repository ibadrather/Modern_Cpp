# specify the C++ compiler
CXX = g++

# specify flags for the C++ compiler
CXXFLAGS = -std=c++17 -Wall -MMD -MP

# specify the directories
SRCDIR = src
OBJDIR = obj
BINDIR = bin

# specify the source and target file
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
DEP = $(OBJ:$(OBJDIR)/%.o=$(OBJDIR)/%.d)
TARGET = $(BINDIR)/output

# default target
all: $(TARGET)

# link
$(TARGET): $(OBJ)
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $^ -o $@

# compile
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# include the dependencies
-include $(DEP)

# clean
clean:
	$(RM) -r $(OBJDIR) $(BINDIR)

# .PHONY targets
.PHONY: all clean
