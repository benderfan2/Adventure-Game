CXX = g++
CXXFLAGS = -m64 -std=c++11

adventure: AdventureGame.o Room.o Verbs.o Nouns.o
	$(CXX) $(CXXFLAGS) -o adventure AdventureGame.o Room.o Verbs.o Nouns.o

AdventureGame.o: AdventureGame.cpp AdventureGame.hpp Room.hpp json.hpp
	$(CXX) $(CXXFLAGS) -c AdventureGame.cpp

Room.o: Room.cpp Room.hpp Nouns.hpp
	$(CXX) $(CXXFLAGS) -c Room.cpp

Nouns.o: Nouns.cpp Nouns.hpp Verbs.hpp
	$(CXX) $(CXXFLAGS) -c Nouns.cpp

Verbs.o: Verbs.cpp Verbs.hpp
	$(CXX) $(CXXFLAGS) -c Verbs.cpp