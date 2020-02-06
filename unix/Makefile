GRLIB = /home/centos/Programs/ReadyLib/dev
GSRC = ../code/GNcurses/src
GBIN = bin
GBUILD = build
GTARGET = $(GBIN)/gncurses 

GINCS = \
    -I$(GSRC)/include \

GLIBS = \
    -lncurses -lmenu -lform

GOBJS = \
    $(patsubst $(GSRC)/%.cpp, $(GBUILD)/%.o, $(wildcard $(GSRC)/*.cpp)) \
    $(patsubst $(GSRC)/manager/%.cpp, $(GBUILD)/%.o, $(wildcard $(GSRC)/manager/*.cpp)) \

GCFLAGS = \
    -Wall \
    
all: $(GOBJS)
	@mkdir -p $(GBIN)
	g++ -o $(GTARGET) $(GOBJS) $(GLIBS) 
$(GBUILD)/%.o: $(GSRC)/%.cpp
	@mkdir -p $(GBUILD)
	g++ $(GCFLAGS) -c $< -o $@ $(GINCS)
$(GBUILD)/%.o: $(GSRC)/manager/%.cpp
	@mkdir -p $(GBUILD)
	g++ $(GCFLAGS) -c $< -o $@ $(GINCS)
clean:
	rm -f $(GBUILD)/*.o $(GBIN)/*
