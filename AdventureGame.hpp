#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <regex>
#include <filesystem>
#include "Room.hpp"
#undef min

using namespace std;
using namespace std::experimental;

CONSOLE_SCREEN_BUFFER_INFO csbi = {0};
void savecolor() {GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);}
void restorecolor(){setcolor(csbi.wAttributes);}
WORD constexpr TITLE_COLOUR = BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE;
constexpr char TITLE[] = "         Unamed - An Anevandos Story         ";

void print_opening();
int import_room(const char* filepath, room& importedRoom);