#include "Verbs.hpp"

class verb
{
    private:
        regex verbRegex;
        
    public:
        regex getRegex()
        {
            return verbRegex;
        }

        void setRegex(regex newRegex)
        {
            verbRegex.assign(newRegex);
        }
};