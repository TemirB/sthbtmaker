ROOT_CONFIG := /home/tahea/root_install/bin/root-config
MCDST_DIR   := /home/tahea/smash_CF_builder/smash_CF_builder/sthbtmaker/StRoot

CXX      := g++
CXXFLAGS := -std=c++20 -fPIC -Wall \
            $(shell $(ROOT_CONFIG) --cflags) \
            -I$(MCDST_DIR)/McDst

LDFLAGS  := $(shell $(ROOT_CONFIG) --ldflags)
LDLIBS   := $(shell $(ROOT_CONFIG) --libs) \
            -L$(MCDST_DIR)/libs -lMcDst

TARGET := cf_runner
SRC    := cf_runner.cpp process_1d.cpp process_3d.cpp
OBJ    := $(SRC:.cpp=.o)

.PHONY: all clean distclean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $^ $(LDLIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

distclean: clean
	rm -f *~
