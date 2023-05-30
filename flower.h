#ifndef FLOWER_DEF
#define FLOWER_DEF

#include <string>
#include <vector>

using namespace std;

class Flower
{
private:
    string name;
    string description;

public:
    Flower(string name); // Constructor
    Flower(string name,string description); // Constructor with Description
    string getName();
    string getDescription();
    ~Flower(); // Destructor
};

#endif