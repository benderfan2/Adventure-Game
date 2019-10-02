#include <vector>
#include <iostream>
#include <Windows.h>
#include "Nouns.hpp"

class room;

WORD constexpr IMPORTANT_COLOUR = FOREGROUND_RED | FOREGROUND_INTENSITY;
WORD constexpr TEXT_COLOUR = IMPORTANT_COLOUR | FOREGROUND_BLUE | FOREGROUND_GREEN;
void setcolor(WORD attribute) {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), attribute);}