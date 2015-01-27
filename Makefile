CXX           = g++
CXXFLAGS      = -Wall -Wextra
LDFLAGS       = -Wall -Wextra
LINK          = $(CXX)
TARGETDIR = bin
TARGET = $(TARGETDIR)/sort
SOURCEDIR = src
BUILDDIR = build

SOURCE = $(wildcard $(SOURCEDIR)/*.cpp)
OBJECT = $(patsubst $(SOURCEDIR)/%.cpp, $(BUILDDIR)/%.o, $(SOURCE))

all: $(TARGET)

$(TARGET): $(OBJECT)
	$(LINK) $(LDFLAGS) -o $@ $^ 

$(BUILDDIR)/%.o: $(SOURCEDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm $(TARGET) $(OBJECT)
