log.log: src.src exe.exe
	./exe.exe < $< > $@

C = cpp.cpp ypp.tab.cpp lex.yy.c
H = hpp.hpp ypp.tab.hpp

CXXFLAGS += -std=gnu++11
exe.exe: $(C) $(H)
	$(CXX) $(CXXFLAGS) -o $@ $(C)

ypp.tab.cpp ypp.tab.hpp: ypp.ypp
	bison $<

lex.yy.c: lpp.lpp
	flex $<
