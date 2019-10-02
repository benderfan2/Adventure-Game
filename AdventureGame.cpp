#include "AdventureGame.hpp"

int main()
{
    int64_t currentRoom = 0;
    string input = "";
    bool started = false;

    savecolor();
    atexit(restorecolor);
    print_opening();

    while(true)
    {
        while(!started)
        {
            regex startRegex(R"reg([sS][tT][aA][Rr][tT])reg");
            cout << "Please type \"start\" to begin." << endl;
            cout << '>';
            getline(cin,input);
            cout << endl;

            if(regex_match(input,startRegex))
            {
                started = true;
            }
        }

        // while(currentRoom == 0)
        // {

        // }

        break;
    }

    return 0;
}

void print_opening()
{
    setcolor(TITLE_COLOUR);
    cout << TITLE << "\n" << endl;
    setcolor(TEXT_COLOUR);
}


/*
    Return values:
        -1 - malformed room json
        0 - room successfully imported
*/
int import_room(const char* filepath, room& importedRoom)
{
    std::experimental::filesystem::path roomPath = filepath;
    ifstream in(roomPath);
    char currentChar;
    string currentLine;

    in.get(currentChar);

    if(currentChar != '{')
    {
        return -1;
    }
    else
    {
        in >> ws;
        in.get(currentChar);
        if(currentChar != '"')
        {
            return -1;
        }
        else
        {
            getline(in, currentLine, '"');
            if(currentLine != "description")
            {
                return -1;
            }
            else
            {
                in.get(currentChar);
                if(currentChar != ':')
                {
                    return -1;
                }

                in.get(currentChar);
                if(currentChar != '"')
                {
                    return -1;
                }
            }
        }
    }

    return 0;
}