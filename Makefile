log.log: exe.exe src.src
	./$^ > $@

C = cpp.cpp
H = hpp.hpp

exe.exe: $(C) $(H)
	$(CXX) $(CXXFLAGS) -o $@ $(C)
