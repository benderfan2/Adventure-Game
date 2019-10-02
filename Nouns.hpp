#include "Verbs.hpp"

class noun
{
    private:
        string word;
        vector<verb> verbs;
    public:
        string getWord()
        {
            return word;
        }

        vector<verb> getVerbs()
        {
            return verbs;
        }

        void setWord(string newWord)
        {
            word = newWord;
        }

        void setVerbs(vector<verb> newVerbs)
        {
            verbs = newVerbs;
        }
};