//countpp1.cpp
//increment counter variable with ++ operator
#include<iostream>
using namespace std;

class Counter
{
    private:
        unsigned int count;
    public:
        Counter():count(0)
        {}

        unsigned int get_count() const
        {
            return count;
        }

        void operator ++ ()
        {
            ++count;
        }
};


