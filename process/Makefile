ROOT_CONFIG := /home/ubuntu/root_install/bin
MCDST_DIR   := /home/ubuntu/Temir/smash/build/data/sthbtmaker-repo/process

CXX      := g++
CXXFLAGS := -std=c++20 -fPIC -Wall \
            $$( $(ROOT_CONFIG)/root-config --cflags ) \
			-I/home/ubuntu/Temir/smash/build/data/sthbtmaker-repo/StRoot/McDst

LDFLAGS  := $$( $(ROOT_CONFIG)/root-config --ldflags )
LDLIBS   := $$( $(ROOT_CONFIG)/root-config --libs )

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
