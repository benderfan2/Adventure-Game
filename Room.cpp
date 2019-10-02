#include "Room.hpp"

using namespace std;

class room{
    private:
        vector<string> description;
        vector<noun> nouns;
    public:
        vector<string> getDescription()
        {
            return description;
        }

        vector<noun> getNouns()
        {
            return nouns;
        }

        void setDescription(vector<string> newDescription)
        {
            description = newDescription;
        }

        void setNouns(vector<noun> newNouns)
        {
            nouns = newNouns;
        }

        void printRoom()
        {
            string descString = "";

            for(size_t i = 0; i < description.size(); ++i)
            {
                descString += description[i];

                for(size_t j = 0; j < nouns.size(); ++j)
                {
                    if(description[i] == nouns[j].getWord())
                    {
                        descString = "[" + descString + "]";
                    }
                }

                descString += " ";
            }

            for(size_t i = 0; i < descString.size(); ++i)
            {
                if(descString[i] == '[')
                    setcolor(IMPORTANT_COLOUR);

                cout << descString[i];

                if(descString[i] == ']')
                    setcolor(TEXT_COLOUR);
            }
        }
};